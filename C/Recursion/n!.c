# include <stdio.h>

int main(){

int i , n , S ;

printf("entrer un nomber : ");
scanf("%d",&n);

S = 1 ;

for(i=1 ; i<=n ; i++){
    
    S =  S * i ;
}

printf("%d! = %d",n,S);


return 0 ;}
