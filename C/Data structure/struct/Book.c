#include <stdio.h>
#include <stdlib.h>

/*la structure Livre :
- titre 
- auteur 
-nombre de page 
-prix 
*/

//Structure Livre 

typedef struct{

     char titre[50];
     char auteur[50];
     int Nbr_pages ;
     float prix ;
    
}Livre;

//fonction Saisir des information de livre 

void saisir(int nbl , Livre *p){

    int i ; 

    for(i = 0 ; i< nbl ; i++){

        printf("Livre %d { \n" ,i+1);
        printf("veuillez entrer le nom de livre :  ");
        scanf("  %[^\n]s" ,(p+i) -> titre );
        printf("veuillez entrer l'auteur de livre : ");
        scanf("  %[^\n]s" ,(p+i) -> auteur);
        printf("veuillez entrer le nombre des pages de livre : ");
        scanf("%d" ,&(p+i) -> Nbr_pages);
        printf("veuillez entrer le prix de livre : ");
        scanf("%f" ,&(p+i) -> prix);
        printf("}\n");

    }

}

//fonction affichier les information 

void affichier (int nbl , Livre *p){

    int i ;

    for(i= 0 ; i<nbl ; i++){

        printf("Livre %d {  \n",i+1);
        printf("Le nom de livre : %s \n" ,(p+i) -> titre);
        printf("l'auteur  de livre : %s \n" ,(p+i) -> auteur);
        printf("le nombre des pages de livre : %d \n" ,(p+i) -> Nbr_pages);
        printf("le prix de livre : %d \n" ,(p+i) -> prix );
        printf("}\n");
     }
}
//fonction principale main 

int main (){

    Livre *p ;
    int nbl ;

    printf("bonjour , ce programme va stocker et affichier les information d'un livre .\n ");
    printf("entrer le nombre des livre qui tu veux de stocker la : \n");
    scanf("%d" ,&nbl);

    p = malloc(nbl*sizeof(Livre));

    if (p == NULL){
        printf("ERREUR de reserve l'espace .");
        exit(1);
    }

    saisir(nbl,p);
    affichier(nbl,p);

    free(p);


return 0 ;}