#include <stdio.h>

int main(){
     
     
     int  N ;

     printf("veuillez entrer un nomber : ");
     scanf("%d" ,&N);

     int T[N];
     int x , i  , min ;
     int Othman ;

      x = 2 ;

      min = 0 ;
      
      do{
         Othman = 0 ;
         for(i = 2 ; i<= x/2 ; i++){
            if(x%i == 0){
                Othman = 1 ;
                break;
            }}
            if (Othman==0){
                T[min] = x ;
                min++ ;
            }
            x++;
            
         
      }while(x <= N );

      printf("les %d nomber premier sont : \n " ,N);

      for(i = 0 ; i< min ; i++){
        printf(" %d \n " ,T[i]);
      }




return 0;}