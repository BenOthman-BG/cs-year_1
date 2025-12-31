/*BINAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAARY*/

#include <stdio.h>

int binary (int x ){

    int S ;
    int a ;

   if (x > 0 )
 
     {
        S = binary(x/2);
        a = x%2 ;
        printf("%d" ,a);
        
    }

return a ; }

int main (){

    int n ; 
    int s ;

    printf("please enter the namber that you want to change into the binary base : ");
    scanf("%d" ,&n);
    
    binary(n);

   


    return 0 ;}
