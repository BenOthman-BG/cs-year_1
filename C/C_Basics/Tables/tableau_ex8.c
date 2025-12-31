/*un programme qui demande 
a l'utilisateure de remplir un tableau de 8 entier ,
 pui le programme dettermine et affiche les elements uniques du tableau*/

 #include <stdio.h>

 int main(){

 int T[8];
 int i , j ;
 int conteur ;

 printf("entre 8 de nomber sur le tableau : \n");

 for(i=0 ; i<8 ; i++){
    printf("T[%d] = ",i+1);
    scanf("%d" ,&T[i]);
 }

  int F[8];

  for(i=0 ; i<8 ; i++){
    F[i] = -1 ;
  }

  /*lhmaaa9*/

  for (i=0 ; i<8 ; i++){
    conteur = 1 ;
    for(j=i+1 ; j<8 ; j++){
        if(T[i] == T[j]){
            conteur++ ;
            F[j] = 0 ;
        }
    }
    if (F[i] != 0 ){
        F[i] = conteur ;
    }

  }

  /*mintenent l'affichage de tableu : */

  for(i=0 ; i<8 ; i++){
    if (F[i] == 1 ){
        printf("%d\n" , T[i]);
    }
  }

 return 0 ;}