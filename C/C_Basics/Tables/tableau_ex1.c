#include <stdio.h>

int main(){
      
     int min , i , max ;
     int T[10];
    
    printf("veuillez entrer les dix valeure : \n");
     for(i=0 ; i<10 ;i++){
        scanf("%d",& T[i]); }
      
      min = T[0];
      for(i=1 ; i<10 ;i++){
           if(min > T[i] ){
            min = T[i] ;}

      }

      max = T[0];
      for(i=1 ; i<10 ;i++){
                   if(max < T[i] ){
            max = T[i] ;}
      }
      
      for(i=0 ;i<10 ;i++){
        printf(" T[%d] = %d " ,i+1 ,T[i]);
        printf("\n");
      }
      

      printf(" le minimant est : %d \n",min);
      printf(" le minimant est : %d ",max);
return 0;}