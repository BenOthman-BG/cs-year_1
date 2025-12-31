#include <stdio.h>
#include <stdlib.h>

void max (int *X , int *Y ){

    int max  ;
      
      max = *X ;
      if ( *X < *Y ){
        max = *Y  ;
      }

      printf("le maximant est : %d " ,max );
}



int main(){

    int a , b ;

    printf("veuilez saisir deux nomber : \n");
    scanf("%d %d",&a ,&b );
    printf(" a = %d ; b = %d " ,a,b);

    max(&a,&b);

return 0;}
