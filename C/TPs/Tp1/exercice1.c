# include <stdio.h>

int main(){


     int  x , i ;
     
     int estpremier ;

     printf("veuillez entrer un nomber : ");
     scanf("%d" ,&x);

      
         estpremier = 0 ;
         for(i = 2 ; i<= x/2 ; i++){
            if(x%i == 0){
                estpremier = 1 ;
                break;
            }}

            if(estpremier==1){
                printf("le nomber n'est pas premier");
            }
            else{
                printf("le nomber est premier");
            }

              

return 0 ;}
