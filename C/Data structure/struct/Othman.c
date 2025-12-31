#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// notre structure 

//------------------------------------------------------------------------------------------------

typedef struct{
    int id ;
    int Capaciter ;
    char libelle[50] ;

}Salle;

//------------------------------------------------------------------------------------------------



// fonction remplire pour remplire les information des salles

//-------------------------------------------------------------------------------------------------

void remplire (Salle S[] , int a){

    int i ;

    for (i = 0 ;i<a ; i++){

        printf("{\n");
        printf("Entrer libelle de Salle %d :" ,i+1);
        scanf("  %[^\n]s" ,&S[i].libelle);
        printf("Entrer le id de salle %d :",i+1);
        scanf("%d" ,&S[i].id);
        printf("Entrer la capacite de salle %d : " ,i+1);
        scanf("%d" ,&S[i].Capaciter);
    
        printf("}\n");

    }

}

//-------------------------------------------------------------------------------------------------



// fonction recherche pour chercher sur une salle puis afichier ses information 


//-------------------------------------------------------------------------------------------------

void Recherche (Salle S[]  , int a ){

    int i ;
    char r[50] ;

    printf("\n\n");
    printf("Tu peu rechercher des information sur une Salle : \n");
    printf("entrer le libelle de salle  :  \n");
    scanf("  %[^\n]s" ,r);

    int Compteur = 0 ;

    for(i = 0 ; i<a ; i++){
        if (strcmp(S[i].libelle , r ) == 0 ){

            printf("----------------------------------------------------------------\n\n");
            printf("{");
            printf(" La salle est : %s \n" ,S[i].libelle);
            printf(" le id de salle est : %d \n" ,S[i].id);
            printf(" la capaciter de salle est : %d\n" ,S[i].Capaciter);
            printf("}");

            printf("----------------------------------------------------------------\n\n");
    }else{
        Compteur++;
    }

}


    if (Compteur == a ){
            
        printf("Cette salle n'exist pas .\n");
    }
}

//-------------------------------------------------------------------------------------------------


// fonction supprimer pour supprimer une fonction 

//-------------------------------------------------------------------------------------------------


void supprimer( Salle S[] , Salle M[] , int a ){

     int i ;
    char r[50] ;
    


    printf(" Entrer la salle qui tu va supprimer :\n ");
    scanf("  %[^\n]s" ,r);

    int Compteur = 0 ;
    int j = 0 ;



    for(i=0 ; i<a ; i++){

      if (strcmp(S[i].libelle , r ) != 0 ){
        
         M[j] = S[i] ;
        j++ ;
       
      }else {
         Compteur++;
      }
    }

    if(Compteur != a ){

         printf("Cette salle n'exist pas .");
        
        }else{

        printf("La salle etait suppremier , Voir les salle qui rest : \n");

        for(i = 0 ; i<a-1 ; i++){

         printf("----------------------------------------------------------------\n\n");

           printf(" Le nom de Salle : %s \n" ,M[i].libelle);
           printf(" Le id de Salle : %d \n" ,M[i].id);
           printf(" La capaciter de Salle : %d \n" ,M[i].Capaciter);

         printf("----------------------------------------------------------------\n\n");
        }
    }

   
}
//-------------------------------------------------------------------------------------------------




// fonction main 
//-------------------------------------------------------------------------------------------------

int main (){

    int a ;


    printf("Bonjour , ce programme permmetrra de saisir , recherche , et de supprimer des information sur n salle . \n");
    printf("tu peux entrer le nomber des salles : ");
    scanf("%d" ,&a);
    Salle S[a];
    Salle M[a-1] ;

    remplire(S,a);
    Recherche(S,a);
    supprimer(S,M,a);

return 0 ;}


//-------------------------------------------------------------------------------------------------