#include <stdio.h>

int main(){

    int T[10] ;
    int i ;

    for(i=0 ; i<10 ;i++){
     
     printf(" T[%d] = " ,i+1);
     scanf("%d" ,&T[i]);
    }
    printf("le tableau inverse est : \n");
    for (i=1 ; i <=10 ;i++){
        printf(" T[%d] = %d \n ",i,T[-i+10]);
    }

return 0;}