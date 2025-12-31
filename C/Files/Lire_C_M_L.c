#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *p ;
   char F_nom[50];
   char c ;
   int caratere = 0 ;
   int mots = 0 ;
   int line = 0 ;

   printf("Bonjour , ce programme va calculer le nombre des mots , des caratere , des lines dans un fichier .\n");
   printf("entrer le nome de fichier qui tu veux : \n");
   scanf("  %[^\n]s" ,F_nom);

   p = fopen(F_nom ,"r");

   if(p == NULL){
    printf("ERRURE cann't open your file \n");
    exit(1);
   }

   // read 

   do{

    c = fgetc(p);
    caratere++;
    if(c == ' ' || c == '\n' || c == '\t'){
        mots++;
    }
    
    if(c == '\n'){
        line++;
    }
   }while(c != EOF);

   if(caratere > 0){
    mots++;
    line++;
   }

   printf("Le nomber des caratere : %d \n" ,caratere);
   printf("le nombre des mots : %d \n " ,mots);
   printf("le nombre des line : %d \n" ,line);



return 0 ;}