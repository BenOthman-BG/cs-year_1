/*le premier max et le deuxieme max */

#include <stdio.h>

int main(){

    int T[10] ;
    int M[10];
    int ot , oth ;
    int i , j;
     int min , max ;
     int min2 , max2 ;


    printf("entrer dix nomber : \n");

    for(i=0 ; i<10 ; i++){
        printf("T[%d] =  " ,i+1);
        scanf("%d" ,&T[i]);
    }
    max = T[0] ;
    max = 0  ;

    for(i=1;i<10;i++){/*blaaaaaaaaaaaaaaaaan 3ti tili lkhok srir et khok srir y3tih li srir 3ilh*/
        if(max < T[i]){
            max2 = max ;
            max = T[i] ;
            }
            else if(max2 < T[i] && max> T[i]){
                max2 = T[i] ;
            }

        }

    printf("max = %d \n" ,max);

    
    printf("max2 = %d " ,max2);



return 0 ;}