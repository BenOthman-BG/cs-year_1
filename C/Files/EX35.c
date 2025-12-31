#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *Pointeur_Fichier ;
    char Description[100];

printf("bonjour , tu peu entrer un petit description sur votre , apres nous allons ajouter votre desciption sur un fichier :\n ");
printf("entrer votre description : \n");
scanf("  %[^\n]s",Description);

//ajouter la descrioption sur un ficher 

Pointeur_Fichier = fopen("Exercice_35.txt" ,"a");

if(Pointeur_Fichier == NULL){
    printf("ERRURE");
    exit(1);
}

fprintf(Pointeur_Fichier ,"%s \n" ,Description);

fclose(Pointeur_Fichier);

printf("votre fichier est crie : \n");


return 0 ;}