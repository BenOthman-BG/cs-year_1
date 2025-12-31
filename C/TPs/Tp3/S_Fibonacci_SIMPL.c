#include <stdio.h>

int main (){

    long n ; 
    long M , i , x , y;
 

    printf("ce  programme va calculer la suite de Fibonacci ");

    printf("please entrer le nomber n : ");
    scanf("%d" ,&n);




    x = 0 ;
    y = 1 ;

    for (i = 1 ; i<=n ; i++){
    printf("%d" ,x);
        M = x + y ;
        x = y ;
        y = M ;

        printf("\n");
    }






return 0 ;}