#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *P_fichier ;
    char name[50];
    int age ;
    char Academic_level[50];
    char Specialty[50];



    P_fichier = fopen("Ben_OTHMAN.txt","w");

    if(P_fichier == NULL){
        printf("ERREUR , Cann't Creat your file .");

        return 1 ;
    }

    printf("hello student I will writ a text that have your education informition , and I will save that in file.txt \n");
    printf("please enter your name : \n");
    scanf("  %[^\n]s",&name);
    printf("please enter your age : \n");
    scanf("%d",&age);
    printf("please enter your Academic level : \n");
    scanf("  %[^\n]s",&Academic_level);
    printf("please enter your Specialty : \n");
    scanf("  %[^\n]s",&Specialty);

    fprintf(P_fichier,"\n Hello %s you are %d  . \n your Level Academic is %s \n And your specialty is %s .",name ,age ,Academic_level ,Specialty);

    printf("The file was created successfuly .\n");

    fclose(P_fichier);

return 0;}