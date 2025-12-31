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
void Creer_Produit(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Erreur ouverture fichier");
        exit(1);
    }
    
    int n;
    printf("Combien de produits voulez-vous ajouter : ");
    scanf("%d", &n);
    Produit p;
    
    for (int i = 0; i < n; i++) {
        printf("\nProduit %d:\n", i + 1);
        printf("Designation : "); scanf("%s", p.designation);
        printf("Reference : "); scanf("%d", &p.reference);
        printf("Prix : "); scanf("%f", &p.prix);
        printf("Quantite en stock : "); scanf("%d", &p.quantite_stock);
        printf("Quantite seuil : "); scanf("%d", &p.quantite_seuil);
        
        fprintf(file, "%d %s %.2f %d %d\n", p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
    }
    fclose(file);
}

// 2. Lister tous les produits
void Lister_Produit(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    Produit p;
    printf("\nListe des produits:\n");
    printf("------------------------------------------------\n");
    while (fscanf(file, "%d %s %f %d %d", &p.reference, p.designation, &p.prix, &p.quantite_stock, &p.quantite_seuil) == 5) {
        printf("Ref: %d | Nom: %s | Prix: %.2f | Stock: %d | Seuil: %d\n",
               p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
    }
    fclose(file);
}

// 3. Rechercher un produit 
void Rechercher_Produit(const char *filename, int ref) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    Produit p;
    int compteur = 0 ;
    while (fscanf(file, "%d %s %f %d %d", &p.reference, p.designation, &p.prix, &p.quantite_stock, &p.quantite_seuil) == 5) {
        if (p.reference == ref) {
           compteur = 1 ;

           break;
        }
    }
    if(compteur == 0 ){
          printf("Produit non trouve.\n");
    }else{
         printf("Produit trouve: Ref: %d | Nom: %s | Prix: %.2f | Stock: %d | Seuil: %d\n",
                   p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
    }
    fclose(file);
}

// 4. Ajouter produits
void Ajouter_Produit(const char *filename) {
    FILE *file = fopen(filename, "ab");
    if (!file) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    int n;
    printf("Combien de produits voulez-vous ajouter : ");
    scanf("%d", &n);
    Produit p;
    
    for (int i = 0; i < n; i++) {
        printf("\nProduit %d:\n", i + 1);
        printf("Reference : "); scanf("%d", &p.reference);
        printf("Designation : "); scanf("%s", p.designation);
        printf("Prix : "); scanf("%f", &p.prix);
        printf("Quantite en stock : "); scanf("%d", &p.quantite_stock);
        printf("Quantite seuil : "); scanf("%d", &p.quantite_seuil);
        
        fprintf(file, "%d %s %.2f %d %d\n", p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
    }
    fclose(file);
}

// 5. Supprimer un produit 
void Supprimer_Produit(const char *filename, int ref) {
    FILE *file = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");
    if (!file || !temp) {
        perror("Erreur ouverture fichier");
        return;
    }
    
    Produit p;
    int found = 0;
    while (fscanf(file, "%d %s %f %d %d", &p.reference, p.designation, &p.prix, &p.quantite_stock, &p.quantite_seuil) == 5) {
        if (p.reference == ref) {
            found = 1;
            printf("Produit trouve et supprime.\n");
        } else {
            fprintf(temp, "%d %s %.2f %d %d\n", p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
        }
    }
    fclose(file);
    fclose(temp);
    
    remove(filename);
    rename("temp.txt", filename);
    if (!found) printf("Produit non trouve.\n");
}

//6.Augmenter le prix 

void Augmenter (const char *filename , int ref ){

    float Porcentage_Augmenter;
    

    printf("entrer le pourcentage de l'augmentation :\n");
    scanf("%f" ,&Porcentage_Augmenter);

    int trouve = 0 ;

    FILE *po = fopen(filename ,"r");
    FILE *tmp = fopen("temp.txt" ,"w");

    if(!po || !tmp){
        perror("ERREUR . \n");
    }

    Produit p;

    while(fscanf(po , "%d %s %f %d %d" ,&p.reference, p.designation, &p.prix, &p.quantite_stock, &p.quantite_seuil) == 5 ){

        if(p.reference == ref){
        p.prix *= ((Porcentage_Augmenter + 100) /100) ;
        trouve = 1 ;
        fprintf(tmp ,"%d %s %.2f %d %d \n" ,p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
        }else{
        fprintf(tmp ,"%d %s %.2f %d %d \n" ,p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
        }
    }

    fclose(po);
    fclose(tmp);

    remove(filename);
    rename("temp.txt" , filename);

    if(trouve == 0 ){
        printf("Produit non trouver ");
    }
}

//7.diminer produit 

void Diminer (const char *filename , int ref ){

    float Porcentage_Diminer;
    float pourcentage_valeure;
    float pourcentage_difference;
    

    printf("entrer le pourcentage de l'augmentation :\n");
    scanf("%f" ,&Porcentage_Diminer);

    int trouve = 0 ;

    FILE *po = fopen(filename ,"r");
    FILE *tmp = fopen("temp.txt" ,"w");

    if(!po || !tmp){
        perror("ERREUR . \n");
    }

    Produit p;

    while(fscanf(po , "%d %s %f %d %d" ,&p.reference, p.designation, &p.prix, &p.quantite_stock, &p.quantite_seuil) == 5 ){

        if(p.reference == ref){
         pourcentage_valeure = p.prix * ((Porcentage_Diminer + 100) /100) ;
         pourcentage_difference =  pourcentage_valeure - p.prix  ;
         p.prix -= pourcentage_difference ;
        trouve = 1 ;
        fprintf(tmp ,"%d %s %.2f %d %d \n" ,p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
        }else{
        fprintf(tmp ,"%d %s %.2f %d %d \n" ,p.reference, p.designation, p.prix, p.quantite_stock, p.quantite_seuil);
        }
    }

    fclose(po);
    fclose(tmp);

    remove(filename);
    rename("temp.txt" , filename);

    if(trouve == 0 ){
        printf("Produit non trouver ");
    }
}



// 0. Programme principal
int main() {
    int choix_employer, ref;
    char F_nm[50];
    
    printf("Bonjour , ce programme va manager des produit : \n");
    printf("entrer le nome de fichier.txt qui tu veux de creer :\n");
    scanf("  %[^\n]s" ,F_nm);
    printf("Valider . \n");

    do {
        printf("\nMenu :\n1. Creer produit\n2. Lister produit\n3. Rechercher produit\n4. Ajouter produit\n5. Supprimer produit\n6. Augmenter produit\n7. Diminer produit\n0. Quitter\n\nVotre choix: ");
        scanf("%d", &choix_employer);
        switch (choix_employer) {
            case 1: Creer_Produit(F_nm); break;
            case 2: Lister_Produit(F_nm); break;
            case 3: printf("Reference ? "); scanf("%d", &ref); Rechercher_Produit(F_nm, ref); break;
            case 4: Ajouter_Produit(F_nm); break;
            case 5: printf("Reference a supprimer ? "); scanf("%d", &ref); Supprimer_Produit(F_nm, ref); break;
            case 6: printf("Rerernce a Augmenter ? ");scanf("%d", &ref);Augmenter(F_nm, ref); break;
            case 7: printf("Rerernce a Diminer ? ");scanf("%d", &ref);Diminer(F_nm, ref); break;

        }

    }while(choix_employer!= 0 );

    return 0;
}