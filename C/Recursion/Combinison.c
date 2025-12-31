// nous allons écrire un programme qui permet de déterminer le nombre de combinaisons possibles de 𝑝 éléments parmi 𝑛.

#include<stdio.h>


// pour le nombre d'element 

int combinaisons (int x  , int y){

    int f ;


    f =1 ;

    if(x==y){
        f=1;
    }

    else if (y == 1 ){
        f = x ;
    }

    else {
      f = combinaisons( x-1 , y-1 ) + combinaisons(x - 1 , y);
    }

    return f;
}



// fonction principale


int main(){

int a , b ;
int nCr ;

printf("entrer le nomber d'element : ");
scanf("%d",&a);
printf("entrer la nombre de turee sumiltaniment : ");
scanf("%d" ,&b);

nCr = combinaisons(a , b);

printf("le nomber de probabiliter est : %d " ,nCr);


return 0 ;}