#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure du produit
typedef struct {
    int reference;
    char designation[20];
    float prix;
    int quantite_stock;
    int quantite_seuil;
} Produit;

//1-creer  fichier .bin

void Creer_fichier (const char *F_nm){

    FILE *file = fopen (F_nm , "wb");

       if (!file) {
        perror("Erreur ouverture fichier");
        exit(1);
    }else{
        printf("le fichier a ete creer avec succes .\n");
    }

    fclose(file);
}

// 2- Creer des produits
void Creer_Produit(const char *F_nm) {
    FILE *file = fopen(F_nm , "ab");
    if (!file) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    int n;
    printf("Combien de produits voulez-vous ajouter ? ");
    scanf("%d", &n);
    Produit p;
    
    for (int i = 0; i < n; i++) {
        printf("\nProduit %d:\n", i + 1);
        printf("Reference : "); scanf("%d", &p.reference);
        printf("Designation : "); scanf("%s", p.designation);
        printf("Prix : "); scanf("%f", &p.prix);
        printf("Quantite en stock : "); scanf("%d", &p.quantite_stock);
        printf("Quantite seuil : "); scanf("%d", &p.quantite_seuil);
        
        fwrite(&p, sizeof(Produit), 1 , file);
    }
    fclose(file);
}

// 3- Lister tous les produits
void Lister_Produit(const char*F_nm) {
    FILE *file = fopen(F_nm, "rb");
    if (!file) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    Produit p;
    printf("\nListe des produits:\n");
    printf("------------------------------------------------\n");
    while (fread(&p, sizeof(Produit), 1, file) == 1) {
        printf("Ref: %d | Nom: %s | Prix: %.2f | Stock: %d | Seuil: %d\n",
               p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
    }
    fclose(file);
}

// 4- Rechercher produit 
void Rechercher_Produit(const char*F_nm ,int ref) {
    FILE *file = fopen(F_nm, "rb");
    if (!file) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    Produit p;
    while (fread(&p, sizeof(Produit), 1, file) == 1) {
        if (p.reference == ref) {
            printf("Produit trouve: Ref: %d | Nom: %s | Prix: %.2f | Stock: %d | Seuil: %d\n",
                   p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
            fclose(file);
            return;
        }
    }
    printf("Produit non trouve.\n");
    fclose(file);
}

// 5- Ajouter produit
void Ajouter_Produit(const char*F_nm) {
    FILE *file = fopen(F_nm, "ab");
    if (!file) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    int n;
    printf("Combien de produits voulez-vous ajouter ? ");
    scanf("%d", &n);
    Produit p;
    
    for (int i = 0; i < n; i++) {
        printf("\nProduit %d:\n", i + 1);
        printf("Reference : "); scanf("%d", &p.reference);
        printf("Designation : "); scanf("%s", p.designation);
        printf("Prix : "); scanf("%f", &p.prix);
        printf("Quantite en stock : "); scanf("%d", &p.quantite_stock);
        printf("Quantite seuil : "); scanf("%d", &p.quantite_seuil);
        
        fwrite(&p, sizeof(Produit), 1, file);
    }
    fclose(file);
}

// 6- Supprimer produit
void Supprimer_Produit(const char*F_nm , int ref) {
    FILE *file = fopen(F_nm, "rb");
    FILE *temp = fopen("temp.bin", "wb");
    if (!file || !temp) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    Produit p;
    int found = 0;
    while (fread(&p, sizeof(Produit), 1, file) == 1) {
        if (p.reference == ref) {
            found = 1;
            printf("Produit trouve et supprime.\n");
        } else {
            fwrite(&p, sizeof(Produit), 1, temp);
        }
    }
    fclose(file);
    fclose(temp);
    
    remove(F_nm);
    rename("temp.bin", F_nm);
    if (!found) printf("Produit non trouve.\n");
}

// 7- Augmenter produit
void Augmenter_Prix_Produit(const char*F_nm) {
    FILE *file = fopen(F_nm, "r+b");
    FILE *tmp = fopen("temp.bin" ,"wb");
    if (!file || !tmp) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    Produit p;
    while (fread(&p, sizeof(Produit), 1, file) == 1) {
            p.prix *= 1.1;
            fwrite(&p, sizeof(Produit), 1, tmp);
        
    }
    fclose(file);
    fclose(tmp);

    remove(F_nm);
    rename("temp.bin", F_nm);
}
// 0- fonction main
int main() {
    int choix, reference;
    char F_nm[20] ;

    printf("Bonjour , ce programme va manager des produit : \n");
    printf("entrer le nome de fichier.bin qui tu veux de creer :\n");
    scanf("  %[^\n]s" ,F_nm);
    printf("Valider . \n");
    do {
        printf("\nMenu :\n1. Creer produit\n2. Lister produit\n3. Rechercher produit\n4. Ajouter produit\n5. Supprimer produit\n6. Augmenter prix\n0. Quitter\nVotre choix: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: Creer_Produit(F_nm); break;
            case 2: Lister_Produit(F_nm); break;
            case 3: printf("Reference ? "); scanf("%d", &reference); Rechercher_Produit( F_nm ,reference); break;
            case 4: Ajouter_Produit(F_nm); break;
            case 5: printf("Reference a supprimer ? "); scanf("%d", &reference); Supprimer_Produit(F_nm , reference); break;
            case 6: Augmenter_Prix_Produit(F_nm); break;
        }
    } while (choix != 0);
    return 0;
}