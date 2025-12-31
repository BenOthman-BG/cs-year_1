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

// 1. Creer un fichier avec des produits
void Creer_Produit() {
    FILE *file = fopen("Produit.bin", "wb");
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

// 2. Lister tous les produits
void Lister_Produit() {
    FILE *file = fopen("Produit.bin", "rb");
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

// 3. Rechercher un produit par référence
void Rechercher_Produit(int ref) {
    FILE *file = fopen("Produit.bin", "rb");
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

// 4. Ajouter un ou plusieurs produits
void Ajouter_Produit() {
    FILE *file = fopen("Produit.bin", "ab");
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

// 5. Supprimer un produit par référence
void Supprimer_Produit(int ref) {
    FILE *file = fopen("Produit.bin", "rb");
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
    
    remove("Produit.bin");
    rename("temp.bin", "Produit.bin");
    if (!found) printf("Produit non trouve.\n");
}

// 6. Augmenter le prix des produits coutant plus de 100 DT
void Augmenter_Prix_Produit() {
    FILE *file = fopen("Produit.bin", "r+b");
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

    remove("Produit.bin");
    rename("temp.bin", "Produit.bin");
}
// 7. Programme principal
int main() {
    int choix, ref;
    do {
        printf("\nMenu :\n1. Creer produit\n2. Lister produit\n3. Rechercher produit\n4. Ajouter produit\n5. Supprimer produit\n6. Augmenter prix\n0. Quitter\nVotre choix: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: Creer_Produit(); break;
            case 2: Lister_Produit(); break;
            case 3: printf("Reference ? "); scanf("%d", &ref); Rechercher_Produit( ref); break;
            case 4: Ajouter_Produit(); break;
            case 5: printf("Reference a supprimer ? "); scanf("%d", &ref); Supprimer_Produit( ref); break;
            case 6: Augmenter_Prix_Produit(); break;
        }
    } while (choix != 0);
    return 0;
}