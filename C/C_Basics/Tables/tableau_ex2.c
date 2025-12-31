#include <stdio.h>

int main(){
      

     int min , i , A ;
     int T[10];
    
    printf("veuillez entrer les dix valeure : \n");
     for(i=0 ; i<10 ;i++){
        scanf("%d",& T[i]); }
        
              for(i=0 ;i<10 ;i++){
        printf(" T[%d] = %d " ,i+1 ,T[i]);
        printf("\n");
      }

      printf(" veuillez entrer autre nomber n : \n");
      scanf("%d" ,&A);
      
      
     min = 0;

      for(i=0 ; i<10 ;i++){
           if(A == T[i] ){
              min++ ;
            
            }  
               
      }
 
     

      if(min == 0 ){
        printf("pat de ce nomber :");
      }
      else{
        printf(" ce namber est exist dan le tableau %d fois . " ,min);
      }



return 0;}