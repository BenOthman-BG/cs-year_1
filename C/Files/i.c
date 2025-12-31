#include <stdio.h>
#include <stdlib.h>


typedef struct {

    char nom[50];
    char prenom[50];
    char CEN[50];
    float Note[10];
}etudiant ;



int main (){

     FILE *P;
    etudiant A ;
    int nbr ;
    int i , j ; 



    
      printf(" Bonjour , Ce programme va affichier un fichier txt contenu des information des etudiants : \n");
    printf("Dabord il faut de remplire les information de n etudiant :\n ");
    printf("Entre le nombre des etudiant : \n");
    scanf("%d" ,&nbr);


    P = fopen("haha.bin" , "wb");
    if(P == NULL){
        printf("impossible de crie un votre fichier : ");
        exit(1);
    }
    //-------------------------------

  
    for ( i = 0 ; i<nbr ; i++){
        printf("Entrer le nome d'etudiant %d : " ,i+1);
        scanf("  %[^\n]s" ,A.nom);
        printf("Entrer le prenom d'etudiant %d :" ,i+1);
        scanf("  %[^\n]s" ,A.prenom);
        printf("Entrer le Code massar d'etudiant %d : " ,i+1);
        scanf("  %[^\n]s" ,A.CEN);
        printf("Entrer les note d'etudiant %d : " ,i+1 );
        for(j=0 ; j<5 ; j++){
             scanf("%f" ,&A.Note[j]);
        }

        /***************** */

        fwrite(&A,sizeof(etudiant),1,P);
    }
    fclose(P);

    printf("--------------------------------------------------------------------------\n");

    printf("Affichage des information sur les etudiant : \n");

    P = fopen("haha.bin" ,"rb");

    i = 1 ;

    while(fread(&A,sizeof(etudiant),1,P) != NULL ){

        printf("Etudian %d \n\n" , i);

        printf("%s , %s \n" ,A.nom ,A.prenom);

        printf("\n\n");

        i++;

    }

    fclose(P);





return 0 ;}