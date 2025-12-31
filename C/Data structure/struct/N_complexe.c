#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//definier une structure Complexe 

typedef struct{
    float reel;
    float imaginaire ;

}Complexe;

//une fonction permettant de demande a l'utilisateur de saisir un nombre complexe

Complexe saisir(){

    Complexe Z ;

 
    printf("entrer la partier reel : \n");
    scanf("%f" ,&Z.reel);
    printf("enter la partier imaginaire : \n");
    scanf("%f" ,&Z.imaginaire);

    return Z ;
}
//une fonction permettrat d'affichier un nombre complexe 

void affichier (Complexe Z1 , Complexe Z2 ){

    
    printf("Z1 = %.2f + i(%.2f) \n" ,Z1.reel ,Z1.imaginaire);
    printf("Z1 = %.2f + i(%.2f) \n" ,Z2.reel ,Z2.imaginaire);
  
}

//une fonction permettrat de calculer la somme de deux nombres complexe

void somme(Complexe Z1 , Complexe Z2){
 
    float S1 , S2 ;

    S1 = Z1.reel + Z2.reel ;
    S2 = Z1.imaginaire + Z2.imaginaire ;


        printf("Z1 + Z2 = %.2f + i(%.2f)  \n" ,S1,S2);


}

//une fonction permettrat de calculer la multiplication de deux nombres complexe

void multiplication(Complexe Z1 , Complexe Z2){

    float S1 , S2 ;

    S1 =  Z1.reel * Z2.reel  -  Z1.imaginaire * Z2.imaginaire ;
    S2 = Z1.reel * Z2.imaginaire + Z2.reel * Z1.imaginaire ;

         printf(" Z1 * Z2 = %.2f + i(%.2f)  \n " ,S1,S2);
  

}

//une fonction permettrat de determiner le conjugue d'un nombre complexe 

void conjugue (Complexe Z1 , Complexe Z2){

    float S1 , S2 ; 

    S1 = -1 * Z1.imaginaire ;
    S2 = -1 * Z2.imaginaire ;

    printf(" Le conjugue de Z1 :  %.2f +   i(%.2f) \n " ,Z1.reel ,S1);
    printf(" Le conjugue de Z2 :  %.2f +  i(%.2f)  \n " ,Z2.reel ,S2);
    


}

//une fonction permettrat de calculer le module d'un nombre complexe

void module (Complexe Z1 , Complexe Z2){

    float S1 , S2 ;

    S1 = sqrt (pow(Z1.reel ,2 ) + pow(Z1.imaginaire , 2 ));
    S2 = sqrt (pow(Z2.reel ,2 ) + pow(Z2.imaginaire , 2 ));

    printf("Le module de Z1 est : Z1 = %.2f \n " ,S1);
    printf("Le module de Z2 est : Z2 = %.2f \n " ,S2);

}

//une fonction permettrat de calcluer l'argument d'un nombre complexe 

void Argument (Complexe Z1 , Complexe Z2){

    float S1 , S2 ;

    S1 = atan(Z1.imaginaire / Z1.reel);
    S2 = atan(Z2.imaginaire / Z2.reel);

    printf(" L'argument de Z1 = %.2f \n" ,S1);
    printf(" L'argument de Z2 = %.2f \n" ,S2);

}

//fonction main 
int main (){
    Complexe Z1 ,Z2 ;

  printf(" Benjour , Ce prgramme va fair plusieure calcule sur de nombre comlpexe :\n ");
  printf(" Alor entrer combien tu veux de saisire 2 nombre et de recu ces calcule : \n");
  int a ;
  scanf("%d" ,&a);
  int i ;

  for(i = 0 ; i<a ; i++){

    printf("---------------------------------------\n");

    printf(" entrer Le nomre Z%d : \n" ,i+1);
    printf("{\n");
     Z1 = saisir();
    printf("}\n");
    printf(" entrer Le nomre Z%d : \n" ,i+1);
    printf("{\n");
     Z2 = saisir();
    printf("}\n");
    printf("---------------------\n");
    affichier(Z1,Z2);
     printf("---------------------\n");
    somme(Z1,Z2);
     printf("---------------------\n");
    multiplication(Z1,Z2);
     printf("---------------------\n");
    conjugue(Z1,Z2);
     printf("---------------------\n");
    module(Z1,Z2);
     printf("---------------------\n");
    Argument(Z1,Z2);

    printf("------------------------------------------------\n");
  }





return 0 ;}