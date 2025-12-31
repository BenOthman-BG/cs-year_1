/*La somme 
produit 
mooyenne
le signe*/

#include <stdio.h>

/*fonction somme */
int somme (int t[] ){
    int S ; 
    int i ; 

    S = 0 ;
    for (i=0 ;i<10 ;i++){
        S = S + t[i] ;
    }

    return S ; 
}

/*fonction moyenne*/

int Moyenne (int t[] ){
    int S ; 
    int i ; 
    int M ;

    S = 0 ;
    for (i=0 ;i<10 ;i++){
        S = S + t[i] ;
    }

    M = S / 10 ;

    return M ; 
}

/*fonction Produit */
int Produit (int t[] ){
    int S ; 
    int i ; 

    S = 1 ;
    for (i=0 ;i<10 ;i++){
        S = S * t[i] ;
    }

    return S ; 
}

/*fonction pour clculer le signe  */

void signe (int t[]){

    int i ;

    printf("les nombre negative sont : \n ");

    for(i=0 ; i< 10 ; i++){
        if ( t[i] < 0){
            printf("%d\n" ,t[i]);
        }
    }

    printf("les nombre positve sont : \n ");

     for(i=0 ; i< 10 ; i++){
        if ( t[i] > 0){
            printf("%d\n" ,t[i]);
        }
    }
    

}



int main(){

int T[10];
int i , S ; 
int M  , P;

printf("entrer les 10 nomber :\n ");

for(i=0 ; i<10 ; i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
}

S = somme(T);
M = Moyenne(T);
P = Produit(T);


printf("la somme est : %d \n",S);
printf("la Moyenne est : %d \n",M);
printf("le Produit est : %d \n",P);

signe(T);






return 0 ;}