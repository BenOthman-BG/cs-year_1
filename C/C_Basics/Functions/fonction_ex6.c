# include <stdio.h>

int premier ( int x ){

int othman , y  , i;

x = 0;
othman = 0;
for ( i = 2 ; i <= x/2 ; i++){
    if (x%i ==0){
        othman = 1 ;
        break;
    }
}

if (othman == 1 ){
     y = 1;
}
else {
    y = 2;
}

return x ;}

int main(){

int a  , G;

printf(" entrer le nomber : ");
scanf("%d" , &a);

G = premier(a);

if ( G ==0){
    printf("se nomber est premier : ");
}
else {
    printf("se nomber n'est pas premier . ");
}


    return 0 ;}
