#include <stdio.h>

typedef struct{
    char nom[50];
    char prenom[50];
    int age ;
}Personne;

typedef struct{
    int NoRue ;
    char *rue ;
    char *ville ;
}Adress;

int main (){

Personne F1;
Adress F2 ;


printf("entrer votre nome : \n");
scanf("%s" ,F1.nom);
printf("entrer votre prenom : \n");
scanf("%s" ,F1.prenom);
printf("entrer votre age : \n");
scanf("%d" ,&F1.age);


printf("entrer le nombre de votre adress :\n ");
scanf("%d" ,&F2.NoRue);
printf("entrer le nom de votre rue :\n ");
scanf("%s" ,&F2.rue);
printf("entrer le nom de votre ville: \n");
scanf("%s" ,&F2.ville);

printf("============================================= votre formulaire ======================================\n");
printf("Nom : %s \n " ,F1.nom);
printf("-----------------------------------------------------------------------\n");
printf("Prenom : %s \n" ,F1.prenom);
printf("-----------------------------------------------------------------------\n");
printf("Age : %d \n" ,F1.age);
printf("-----------------------------------------------------------------------\n");
printf(" Nom de Rue : %s \n" ,&F2.rue);
printf("-----------------------------------------------------------------------\n");
printf("Nombre de Rue : %d \n" ,F2.NoRue);
printf("-----------------------------------------------------------------------\n");
printf("Nome de ville : %s \n" ,&F2.ville);
printf("==========================================================================================================\n");


return 0 ;}