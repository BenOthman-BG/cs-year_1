/*PGCD = plus grand diviseure comaine  */
# include <stdio.h>

int PGCD (int x , int y ){

    int S ;

    if ( y == 0){
        S = x ;
    }else{
        S = PGCD(y , x%y);
    }



    return S ;
}

int main(){

int a , b ;
int S ;

printf("please enter  a and b : ");
scanf("%d %d" ,&a ,&b);
printf(" a = %d\n " ,a);
printf(" b = %d \n" ,b);

S = PGCD(a , b);

printf("le PGCD est : %d " ,S);


return 0 ;}