#include <stdio.h>
#include <stdlib.h>

int fact (long m ){

    long f ;


    f =1 ;
    if(m==0){
        f=1;
    }
    else{
        f = m*fact(m-1);
    }

    return f;
}

int main (){

long n , fac;

printf("entrer un nomber : ");/*la puissance*/
scanf("%d",&n);

fac = fact(n);

printf("%d! = %d",n,fac);


return 0 ;
}