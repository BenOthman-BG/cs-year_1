#include <stdio.h>/*le miniment d'un tableau*/

int main(){

    int T[6];
    int min ;
    int *p ;

    p = T ;

    printf("veuillez saisir les 6 nomber : ");
    /*nouveau methode de boucle for */

    for(p=T ; p < T+6 ;p++){

printf("T[%d] = " ,p-T);
scanf("%d" ,p);
 }

 min=*p;
 for(p=T ; p<T+6;p++){
    if(min > *p){
        min = *p;
    }
 }

 printf("min = %d" ,min);

                                   




return 0;}