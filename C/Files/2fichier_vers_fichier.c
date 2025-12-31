#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *first_fichier;
    FILE *Second_Fichier;
    FILE *Fichier_stock ;
    char P_fichier[50];
    char D_fichier[50];
    char R_fichier[50];
    char c ;
    char str[50];

    printf("Bonjour , ce programme va transfere le contenu de deux fichier vers un autre fichier :\n");
    printf("Entrer le nom de premier fichier : \n");
    scanf("  %[^\n]s" ,P_fichier);
    printf("Entrer le nom de deuxieme fichier : \n");
    scanf("  %[^\n]s" ,D_fichier);

   first_fichier = fopen(P_fichier , "r");
   Second_Fichier = fopen(D_fichier , "r");

   if(first_fichier == NULL || Second_Fichier == NULL){
    printf("EREUR cann't open your file \n");
    exit(1);
   }

   printf("Entrer le nom de nouvaux fichier qui tu veux de transfere les information vers la : ");
   scanf("  %[^\n]s" ,R_fichier);

   Fichier_stock = fopen(R_fichier ,"w");
   if(Fichier_stock == NULL){
    printf("EREUR cann't creat your file \n");
    exit(1);
   }


   // read the file with fgetc

   do{
    c = fgetc(first_fichier);
    fprintf(Fichier_stock, "%c" ,c);
   }while(c != EOF);

   //espace

   fprintf(Fichier_stock ,"\n___________________________________________________________________________________________\n");

   // read the file with fgets
   
   while(fgets(str,50,Second_Fichier) != NULL){
    fprintf(Fichier_stock ,"%s" ,str);
   }

   printf("l'operation a ete realiser avec succes ");


return 0 ;}