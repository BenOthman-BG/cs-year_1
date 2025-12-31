#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char Nom[50];
    char Prenom[50];
    int Matriculation ;
}Personne;

int main (){

     Personne *TabPers ;
    TabPers = (Personne *) malloc(3*sizeof(Personne));

    strcpy(TabPers[0].Nom , "OThman");
    strcpy(TabPers[0].Prenom , "Benyahya");
    TabPers[0].Matriculation = 99 ;

       strcpy(TabPers[1].Nom , "Hamza");
    strcpy(TabPers[1].Prenom , "Benyahya");
    TabPers[1].Matriculation = 77;

       strcpy(TabPers[2].Nom , "Maryam");
    strcpy(TabPers[2].Prenom , "Mbarki");
    TabPers[2].Matriculation = 20 ;


    int i ;


    for(i=0 ; i<3 ; i++){

      printf("Nom :  %s\n" ,TabPers[i].Nom);
      printf("Prenom : %s\n" ,TabPers[i].Prenom);
      printf("Matriculation : %d \n" ,TabPers[i].Matriculation);

      printf("\n\n");
    }

    free(TabPers);

return 0 ;}