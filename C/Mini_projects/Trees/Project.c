#include <stdio.h>
#include<stdlib.h>
#include <string.h>


//0. notre structure 

typedef struct etudiant {
    unsigned int id ;
    char nom[50];
    char prenom[50];
    float note ;
    struct etudiant *right ;
    struct etudiant *left;
}etudiant;
//1.cree etudiant 

etudiant * cree_etudiant (char *_nom , char *_prenom , float _note , unsigned int _id ){
          etudiant * new_student = malloc(sizeof(etudiant));
          if(new_student == NULL){
            perror(" ERORE .....");
            exit(1);
          }
          strcpy(new_student -> nom , _nom);
          strcpy(new_student -> prenom , _prenom);
          new_student -> id = _id ;
          new_student -> note = _note;
          new_student -> right = NULL ;
          new_student -> left = NULL ;

          return new_student ;
}
//2.Ajouter etudiant

etudiant * Ajouter_etudiant (etudiant * root , char *_nom , char *_prenom , float _note , unsigned int _id  ){
    if( root == NULL){
        return cree_etudiant(_nom , _prenom , _note , _id);
    }
    if(_id > root -> id){
        root -> right = Ajouter_etudiant(root -> right , _nom , _prenom , _note , _id);
    }
    if( _id < root -> id){
        root -> left = Ajouter_etudiant (root -> left , _nom , _prenom , _note , _id );
    }

    return root ;
}
//3.search etudiant

int search_etudiant (etudiant * root , unsigned int _id ){
    if(root == NULL){
        return 0 ;
    }
    if(_id == root -> id){
        return 1;
    }
    if(_id > root -> id){
        return search_etudiant (root -> right , _id);
    }else{
        return search_etudiant (root -> left , _id);
    }
}

//4.supremier etudiant 

etudiant * minLeft (etudiant * root ){
        etudiant * courant = root ;
    
        if(courant && courant -> left != NULL){
            courant = courant -> left ;
        }

        return courant ;
}

etudiant * supremier_etudiant ( etudiant * root , unsigned int id  ){
    if(root == NULL){
        return root ;
    }
    if(id > root -> id ){
        root -> right = supremier_etudiant(root -> right ,id );
    }else if(id < root -> id ){
        root -> left = supremier_etudiant(root -> left , id );
    }
    else {
        if(root -> right == NULL){
            etudiant * tmp = root -> left;
            free(root);
            return tmp;
        }else if ( root -> left == NULL){
            etudiant * tmp = root -> right;
            free(root);
            return tmp ;
        }
        etudiant * tmp = minLeft(root -> right);
        strcpy(root -> nom , tmp -> nom );
        strcpy(root -> prenom , tmp -> prenom);
        root -> note = tmp -> note;
        root -> id = tmp -> id ;
        root -> right = supremier_etudiant(root -> right , tmp -> id );

    }
     return root ;
}



// Exporter la structure en DOT
void exportDot(etudiant *root, FILE *f) {
    if (root == NULL) return;

    fprintf(f, "    %u [label=\"%u\\n%s %s\\n%.2f\"];\n", root->id, root->id, root->nom, root->prenom, root->note);

    if (root->left != NULL) {
        fprintf(f, "    %u [label=\"%u\\n%s %s\\n%.2f\"];\n", root->left->id, root->left->id, root->left->nom, root->left->prenom, root->left->note);
        fprintf(f, "    %u -> %u;\n", root->id, root->left->id);
        exportDot(root->left, f);
    }

    if (root->right != NULL) {
        fprintf(f, "    %u [label=\"%u\\n%s %s\\n%.2f\"];\n", root->right->id, root->right->id, root->right->nom, root->right->prenom, root->right->note);
        fprintf(f, "    %u -> %u;\n", root->id, root->right->id);
        exportDot(root->right, f);
    }
}

void generateDotFile(etudiant *root) {
    FILE *f = fopen("project.dot", "w");
    if (f == NULL) {
        printf("Erreur d'ouverture de fichier.\n");
        return;
    }

    fprintf(f, "digraph BST {\n");
    fprintf(f, "    node [shape=box];\n");
    exportDot(root, f);
    fprintf(f, "}\n");

    fclose(f);
    printf("Fichier DOT genere : project.dot\n");
}
//00 Main 
int main (){

    etudiant *root = NULL;
    int choix;
    unsigned int id ;
    char nom[50];
    char prenom[50];
    float note ;
    int test;
    int nbr;

    do {
        printf("\nMenu :\n");
        printf("1. Ajouter etudiant \n");
        printf("2. Chercher etudiant\n");
        printf("3 .Affichier Graphe \n");
        printf("4.Suprimer etudiant \n");
        printf("0.Quiter \n");
        printf(" Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("ID : ");
                scanf("%d" ,&id);
                printf("Nom : ");
                scanf("  %[^\n]s" ,nom);
                printf("prenom : ");
                scanf("  %[^\n]s" ,prenom);
                printf("note : ");
                scanf("%f", &note);
                root = Ajouter_etudiant(root, nom , prenom , note , id);
                break;
            case 2:
                printf("Entrer le ID a chercher : ");
                scanf("%d", &id);
                test = search_etudiant(root, id);
                if (test == 1) {
                    printf("Found.\n");
                } else {
                    printf("Not found!\n");
                }
                break;
            case 3:
                generateDotFile(root);
                break;
            case 4 : 
                printf("ID : ");
                scanf("%d" ,&id);
               root = supremier_etudiant(root , id);
        }

            
            }while(choix != 0);

    return 0 ;
}