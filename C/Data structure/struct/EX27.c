/*un programme qui peu de stocker les information des etudiants */

#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char Nom[50];
    char Prenom[50];
    char INE[50];
    float N_table[5];
}Etudiant;

// Fonction Void pour afficher les information des Etudiant 

void I_Afficher(Etudiant A[] , int a , float *Array){

    int i ;
   
 

    for (i=0 ; i<a ; i++){

    
      printf("{\n");
      printf("Nom : %s\n" ,A[i].Nom);
      printf("Prenom : %s \n" ,A[i].Prenom);
      printf("INE : %s \n",A[i].INE);
      printf("La moyenne de 5 matiers : %.2f \n" ,Array[i]);
      printf("}\n\n");
      
    }
}

//fonction Void pour calculer la moyenne de 5 notes 

float* C_Moyenne( Etudiant A[] ,int a ){

    float *S = malloc(a *sizeof(float));
    float *M  = malloc(a *sizeof(float));

    if(S == NULL && M == NULL){
        printf(" cann't reserve the space .");
        exit(1);
    }

    int i , j  ;


    for(i=0 ; i<a ; i++){
        S[i] = 0 ;
        for(j = 0 ; j<5 ; j++){
            S[i] = S[i] + A[i].N_table[j];
        }
        M[i] = S[i] / 5 ; 
    }
    return M ;

}

void best ( Etudiant A[] , int a , float *Array2 ){

    int i ;
    int g = 0 ;
    float max ;


   max = Array2[0];
    for(i = 1 ; i<a ; i++){

        if(Array2[i] > max){
            max = Array2[i] ;
            g = i ;
        }
    }

    printf("-------------------------------------------------\n");

    printf(" le premier etudiant est : %s %s   de moyenne %.2f \n " ,A[g].Nom ,A[g].Prenom ,max);


    
}

//fonction principale

int main(){

    int a ;



    printf("Bonjour , ce programme peut de stcker les information de n Etudiant : \n");
    printf("Entrer le nomber des etudiant qui tu va entrer leur information : \n");
    scanf("%d" ,&a);

// Declarer la structure

Etudiant A[a];

printf("mintenant remplire les information des etudiant : \n");

int i ,j;

//stocker les information dans un boucle for 

for (i=0 ; i<a ; i++){

      printf("----------------------------------------------------------------------\n");

    printf("entrer le nom de %d Etudiant : \n" ,i+1);
    scanf("  %[^\n]s" ,&A[i].Nom);
    printf("entrer le Prenom de %d Etudiant :\n " ,i+1);
    scanf("  %[^\n]s" ,&A[i].Prenom);
    printf("Entrer l INE de %d Etudiant : \n",i+1);
    scanf("  %[^\n]s" ,&A[i].INE);
    printf("Entrer les notes de 5 matiers de %d Etudiant :\n " ,i+1);
    for(j=0 ; j<5 ; j++){
        scanf("%f" ,&A[i].N_table[j]);
    }

    printf("----------------------------------------------------------------------\n\n");
}


float  *p = C_Moyenne(A , a );

I_Afficher( A , a , p);
best(A , a , p );




    


    return 0 ;}