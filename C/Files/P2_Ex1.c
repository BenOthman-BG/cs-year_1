#include <stdio.h>
#include <stdlib.h>


int main (){

    FILE *file1 ;
    FILE *file2 ;
    char nom_f1[50];
    char nom_f2[50];
    char str[50];

   printf("Bonjour , ce programme va ajoute le contenu d'un file1 dans le contenu d'un file2 \n ");
   printf("Veullez saisir le nom de file 1 :\n ");
   scanf("%s" ,nom_f1);
   printf("Veullez saisir le nom de file 2 : \n"); 
   scanf("%s" ,nom_f2);

// ouvrer les deux fichier 

file1 = fopen(nom_f1 ,"a+");
file2 = fopen(nom_f2 ,"a+");

if(file1 == NULL || file2 ==NULL){
 printf("ERREUR");
 exit(1);
}

// Ajouter le contenu de fichier 1 dans le contenu de fichier 2 

while(fgets(str,50,file1) != NULL){
    fprintf(file2 ,"%s" ,str );
}

fclose(file1);
fclose(file2);

printf("le contenu va ajouter ");



return 0 ;}