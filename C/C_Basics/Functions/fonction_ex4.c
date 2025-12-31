#include <stdio.h>
#include <stdlib.h>

void  dex(int n ){
    
    int mal ;

    mal = 0 ;
    


    do{
       
         n = n / 10 ;
         mal++;
      
 
    }while(n!=0);

      printf("les nomber est constutier de %d nombres \n " ,mal);
}

    int main (){ 

        int m ;

        printf("veuilez saisir un nomber : \n");
        scanf("%d" , &m);

dex();



return 0;}



  