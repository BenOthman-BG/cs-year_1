/*
U0 = 0 
U1 = 1 
Un+2 = Un+1 + Un
*/

# include <stdio.h>

int suite (long a ){

    long f ;

    if (a == 0){
        return 0 ;
    }else if(a==1){
        return 1 ;
    }else {
        f = suite(a-2) + suite(a-1);
    }

return f ;}


int main(){

    long n ; 
    long M , i;
 

    printf("ce  programme va calculer la suite de Fibonacci ");

    printf("please entrer le nomber n : ");
    scanf("%d" ,&n);

    n = n + 2 ;

     M = suite(n);

    printf("Un+2 = U%d+2 = %d \n",n-2,M);


/*know we can see the creativity */

n = n - 2 ;

printf("U%d <= Un+2 sont : \n" ,n);

    for(i=0 ; i<=n ; i++){
    printf(" =  %d \n",suite(i));
    }



return 0 ;}


