#include <stdio.h>
#include <stdlib.h>



int main (){


int *Pi ;
float *Pl ;
char *Pc ;

Pi = (int *) malloc(sizeof(int));
Pl = (float *)malloc(sizeof(float));
Pc =(char *) malloc(sizeof(char));

*Pi = 1 ;
*Pl = 2.4 ;
*Pc = 'n' ;

printf(" %d\n" ,*Pi);
printf(" %.2f\n" ,*Pl);
printf(" %c\n" ,*Pc);

free(Pi);
free(Pl);
free(Pc);




return 0 ;}