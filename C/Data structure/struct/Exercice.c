/*Modifier le programme de l'exercice 3 en ajoutant deux fonctions: 
1- Une Fonction qui affiche le nom et l'equipe de chaque joueur .
2- Une fonction qui affiche les joueurs qui jouent en attaque .
3- Une fonction qui change l'equipe et le numero du joueur s'il rejoint une autre equipe .*/

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

Joueur A[3];



int i ;

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







