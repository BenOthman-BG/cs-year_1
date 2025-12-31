/* a l'aide d'un pointeur , un programme qui affiche les diviseure d'un entier n non nul .*/

#include <stdio.h>

void deviser (int *pa){

    int i ;

    for(i=1 ; i<=*pa ; i++){
        if (*pa%i == 0){
            printf("  %d \n" ,i);
        }
    }
 }

int main (){


    int a ;

    printf("please enter the namber that you want to find it's diveser :");
    scanf("%d" ,&a );

    deviser(&a);



return 0 ;}