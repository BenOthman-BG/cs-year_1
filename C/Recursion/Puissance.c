//la puissance d'un nomber X^n en etulisant la fonction recurcive 

#include <stdio.h>
#include <math.h>

int puiss (int n , int X){

     int f = 1 ;


    if (X==0){
        f = 1 ;
    }
    else{
        f = n * puiss(n,X-1);
    }


    return f;
}


int main(){

 int a , b ;
 int puis ;

 printf("entrer le nomber :");
 scanf("%d",&a);

printf("entrer la puissance : ");
scanf("%d",&b);

 puis = puiss(a,b);

 printf("%d ^ %d = %d ",a,b,puis);



return 0;}