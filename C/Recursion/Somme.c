/*la somme des entiers de 1 a n : S = 1 + 2 + 3 + . . . + n*/

#include <stdio.h>

/*fonction recursive */

int somme (int n ){

int S ;

if (n == 1){
    S = 1 ;
}else{
    S = n + somme(n-1);
}

return S ; }

/*fonction  principale */

int main(){

int n ; 
int S ;

printf("ce programme va calculer la somme des entiers de 1 a n : S = 1 + 2 + 3 + . . . + n \n");
printf("veuillez entrer la valeure de n : \n");
scanf("%d" , &n);

S = somme(n);

printf("la somme est : %d " ,S);


return 0 ; }