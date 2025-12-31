#include <stdio.h>






int main (){

       float T[6];
   int i ;
   float S ;
       

 printf("veuillez saisir les note : \n");



     


       for(i=0 ; i<6 ;i++){

            printf("T[%d] = %.2f \n" ,i+1,T[i]);
       scanf("%f" ,&T[i]);
   

       }

        float *P ;

 P = T ;

              S = 0 ;

       for(i=0 ; i<6 ;i++){

        S = S + *(P+i) ;

       }

       printf(" la somme est : %.2f ",S);






return 0;}
