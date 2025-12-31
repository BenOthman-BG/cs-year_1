#include <stdio.h>
#include <stdlib.h>

void anne ( int n){
    
    float  S , X ;

    S = n / 4 ;
    X = n / 100 ;
     if( n%4 ==0 && n/100 !=0){
         printf("l'anne est bessixit ");
     }
     else {
        printf("l'anne n'est pas bessixit ");
     }
}

int main (){

    int n ;

    printf("veuillez entrer l'anne : \n");
    scanf("%d" ,&n);

    anne(n);


return 0;}