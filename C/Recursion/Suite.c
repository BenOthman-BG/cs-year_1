/*
U0 = 0 
U1 = 1 
Un+2 = Un+1 + Un
*/

# include <stdio.h>

int suite (int a ){

    int f ;

    if (a == 0){
        return 0 ;
    }else if(a==1){
        return 1 ;
    }else {
        f = suite(a-2) + suite(a-1);
    }

return f ;}


int main(){

    
    int  i;
    int a , b ;
 

    printf("ce  programme va calculer la suite de Fibonacci ");

    printf("please entrer le nomber n :\n ");
    scanf("%d" , &a);
    scanf("%d" , &b);
    printf("# La resultat : \n");


//--------------------------------------------------


int n = 1 ;
int x = 1 ;
int j = 0 ;
int T[100];
int s = 0 ;


    for(i=0 ; i<=n ; i++){
        if( suite(i) <= b ){
            T[j] = suite(i);
            j++;
            n++;
        }
    }


    for(i = 0 ; i <= j ; i++){

        if(T[i] >= a ){
        printf(" *  %d\n" , T[i]);
      s++;
        }
    }

    printf(" # le nombre de F : %d \n" ,s);

return 0 ;}


