#include <stdio.h>
#include "abr.h"

int main() {
    Num *root = NULL;
    int choix;
    int numb;
    int test;
    int nbr;

    do {
        printf("\nMenu :\n");
        printf("1. Entrer number\n");
        printf("2. Afficher ABR (inorder)\n");
        printf("3. Chercher number\n");
        printf("4. Générer fichier DOT pour Graphviz\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Entrer number : ");
                scanf("%d", &numb);
                root = insert(root, numb);
                break;
            case 2:
                printf("\nABR (Inorder) : ");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("Entrer le nombre à chercher : ");
                scanf("%d", &nbr);
                test = search(root, nbr);
                if (test == 1) {
                    printf("Found.\n");
                } else {
                    printf("Not found!\n");
                }
                break;
            case 4:
                generateDotFile(root);
                break;
        }
    } while (choix != 0);

    return 0;
}