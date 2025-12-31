#include <stdio.h> /*exercice qui detecter un nomber si paire oui imopaire*/


float othman (int *pa){

    int S ;

     S = *pa / 2;

     if (*pa % 2 == 0){
        printf("le nomber est paire ");
     }
    else{
        printf("le nomber est impaire");
    }
}

int main (){

    int A ;

    printf("veuillez saisir un nomber entier : ");
    scanf("%d" ,&A);

    othman(&A);

return 0;}