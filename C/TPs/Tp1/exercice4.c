#include<stdio.h>

int main(){

int A ;


printf("entrer un vaeure :");
scanf("%d",&A);

printf("la valeure : %d l'adresse : %p ",A,A);/*l'adresse en hexa dessimal*/
printf("la valeure : %d l'adresse : %p ",A,&A);/*l'adresse */


    return 0;
}