#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// les structure des donner des joueurs 

typedef struct {

  char Nom_Eq[50];
  char Stade[50];
  char Coach[50];
  char Country[50];
}Equipe;


typedef struct {
 
  
     int Numero ;
     int MV ;
     char poste[50] ;
     char country[50] ;
     char Nom[50] ;
     char Prenom[50];
     Equipe club ;

}Joueur;

// fonction pour affichier les information des joueur

 void Afficher_Jour_Equipe( Joueur A[]){

//affichage les joueurs 

int i ;

for(i=0;i<4 ;i++){

  printf("PLAYER NUMBER %d {\n" ,i+1);

printf("First name :  %s \n" ,A[i].Nom);
printf("Last name : %s \n " ,A[i].Prenom);
printf("Player center : %s \n" ,A[i].poste);
printf("Club name :  %s \n" ,A[i].club.Nom_Eq);

printf("}\n");

}

 }

 // afficher les joueur qui jouer en attaque

void attaque(Joueur A[4]){

int i ;

for (i=0 ; i<4 ; i++){

    if (strcmp(A[i].poste , "Attaque") == 0){

        printf("%s %s" ,A[i].Nom ,A[i].Prenom);
        printf("\n");
    }
    
}

}

//fonction qui fair le mercato 

void mercato(){

for (i =0 ;i<x ; i++){

    printf("entrer le nome de jour : ")
}


}


 //fonction principale

 int main(){


printf("hello man , you can enter three of your favorite players . \n ");
printf("You can also add information about them . \n");
printf("let's start : \n");

printf("-------------------------------------------------------------------------------\n\n");

   Joueur A[4];

    int i ;

    for(i=0 ; i<4 ; i++){

printf(" PLAYER NUMBER %d {\n" ,i+1);

printf("enter the first name of the player : \n" );
scanf("  %[^\n]s" ,&A[i].Nom);
printf("enter the last name of the player : \n" );
scanf("%s" ,&A[i].Prenom);
printf("enter his center : \n");
scanf("  %[^\n]s" ,&A[i].poste);


printf("Know you can add his club information : \n");
printf("Club name : \n");
scanf("  %[^\n]s" ,&A[i].club.Nom_Eq);
printf("Stade name :\n");

printf("---------------------------------------------------------------------------------------------------------------------\n");

}

int M ;

printf("entrer le nombre des joueur qui fair le mercato :");
scanf("%d" ,&M);





//appel la fonction affiche le nome et l'equipe des joueurs

Afficher_Jour_Equipe(A);
printf("-----------------------les joueur qui jouer en attaque -----------------------\n");
attaque(A);

 return 0 ;}