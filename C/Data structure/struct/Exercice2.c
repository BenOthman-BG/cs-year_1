/*Un joueur est defini par :
  - numero : le numero de maillot 
  - Nom : le nom du joueur 
  - Poste : defense , milieu , attaque 
1 - definir la structure Joueur 
2 - Demande a l'utilisateur de remplir les information de trois joueurs .
3 - Afficher les information de tous les joueurs entres par l'utilisateur .

4 - Modifier le progemme de exercice 1 en ajoutant le champ equipe a la structure joueur . Equipe est une structure definie par le nom . le stade
l'entraineur et le pays . Ajouter ensuite les instructions necessaires pour creer un tableau de 4 joures rempli par l'utiliateur et les affiche 
par la suite . 

*/

#include <stdio.h>


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


int main(){

Joueur A[1];
Joueur A3 ;
Joueur *p = &A3 ;


int i ;
return 0 ;}


void afficheN-Pre(Joueur A[]){

printf("hello man , you can enter three of your favorite players . \n ");
printf("You can also add information about them . \n");
printf("let's start : \n\n\n");


for(i=0 ; i<1 ; i++){

printf(" PLAYER NUMBER %d {\n" ,i+1);

printf("enter the first name of the player : \n" );
scanf("  %[^\n]s" ,&A[i].Nom);
printf("enter the last name of the player : \n" );
scanf("%s" ,&A[i].Prenom);
printf("enter his number : \n ");
scanf("%d" ,&A[i].Numero);
printf("enter his center : \n");
scanf("  %[^\n]s" ,&A[i].poste);
printf("enter his country : \n");
scanf("%s" ,&A[i].country);
printf("enter his market value : \n");
scanf("%d" ,&A[i].MV);

printf("Know you can add his club information : \n");
printf("Club name : \n");
scanf("  %[^\n]s" ,&A[i].club.Nom_Eq);
printf("Stade name :\n");
scanf("  %[^\n]s" ,&A[i].club.Stade);
printf("coach name : \n");
scanf("  %[^\n]s" ,&A[i].club.Coach);
printf("Country of the club : \n");
scanf("  %[^\n]s" ,&A[i].club.Country);
printf("}\n\n\n");

}

printf(" PLAYER NUMBER 4 {\n" );

printf("enter the first name of the player : \n" );
scanf("%s" ,&p->Nom);
printf("enter the last name of the player : \n" );
scanf("%s" ,&p->Prenom);
printf("enter his number : \n ");
scanf("%d" ,&p->Numero);
printf("enter his center : \n");
scanf("%s" ,&p->poste);
printf("enter his club : \n");
scanf("%s" ,&p->club);
printf("enter his country : \n");
scanf("%s" ,&p->country);
printf("enter his market value  : \n");
scanf("%d" ,&p->MV);
printf("}\n\n\n");





printf("============================================= votre formulaire ======================================\n");


for(i=0;i<1 ;i++){

  printf(" PLAYER NUMBER %d {\n" ,i+1);

printf("First name :  %s \n" ,A[i].Nom);
printf("Last name : %s \n " ,A[i].Prenom);
printf("Player number : %d \n" ,A[i].Numero);
printf("Player center : %s \n" ,A[i].poste);
printf("Player country : %s \n ",A[i].country);
printf("Player's MV : %dM $\n" ,A[i].MV);
printf("Club name :  %s \n" ,A[i].club.Nom_Eq);
printf("Stade name :  %s \n" ,A[i].club.Stade);
printf("coach name :  %s \n",A[i].club.Coach);
printf("Country of the club :  %s \n" ,A[i].club.Country);

printf("}\n\n\n");

}


printf(" PLAYER NUMBER 4 {\n");

printf("First name : %s \n" ,p->Nom);
printf("Last name : %s \n " ,p->Prenom);
printf("Player number : %d \n" ,p->Numero);
printf("Player center : %s \n" ,p->poste);
printf("Player country : %s \n ",p->country);
printf("Player's MV : %dM $\n" ,p->MV);
printf("}\n\n\n");

printf("============================================= votre formulaire ======================================\n");

}