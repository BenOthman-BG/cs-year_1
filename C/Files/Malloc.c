#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//structure

typedef struct{
  char *nom ;
  char *prenom;
  int age ;

}etudiant;
//fonction Saisir

void entrer (int nbr , etudiant *P){

    char tmp[50];
    char tmp2[50];
    int i ;

    FILE *p = fopen("othman.txt" ,"w");

    if(p == NULL){
        perror("impossible d'ouvrire votre fichier.");
        exit(1);
    }

    for(i = 0 ; i<nbr ; i++){

        printf("\n etudiant %d :\n",i+1 );
        printf("entrer le nom : ");
        scanf("  %[^\n]s" ,tmp);
        printf("entrer le prenom : ");
         scanf("  %[^\n]s" ,tmp2);
        
    P->nom = malloc((strlen(tmp)+1)*sizeof(char));
    strcpy(P->nom , tmp);


    P->prenom = malloc((strlen(tmp2)+1)*sizeof(char));
    strcpy(P->prenom ,tmp2);

    printf("entrer age : ");
    scanf("%d" ,&(P->age));

    fprintf(p ,"%s %s %d\n" ,P->nom ,P->prenom ,P->age);

    free(P->nom);
    free(P->prenom);

}
fclose(p);
}
//fonction affichier 
//fonction main

int main(){

int nbr ;

printf("enter le nombre des etudiant :\n");
scanf("%d" ,&nbr);


etudiant *P = malloc(sizeof(etudiant));

if (P == NULL){
    perror("imposible de reserver l'espace :\n");
    exit(1);
}

 entrer(nbr ,P);

free(P);

printf("les donnes sont enregistrer\n");


}