#include <stdio.h>/*a l'aid des pointeur , la somme , le preduit , la devision */

int main(){


    float a , b ;
    float *pa , *pb ;
    float S , M  ;
    float D ;
    pa = &a ;
    pb = &b ;

printf("veuilez saisir les deux valeur :\n ");
scanf("%f" ,pa);
scanf("%f" ,pb),
printf("a = %.2f : b = %.2f \n" ,*pa,*pb);



S = *pa + *pb ;
D = *pa / *pb ;
M = *pa * *pb ;

printf("a + b = %.2f\n ",S);
printf("a / b = %.2f\n",D);
printf("a * b  = %.2f\n" ,M);


return 0;}