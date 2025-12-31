#include <stdio.h>


void note ( float A ){
    if( A >= 16 && A < 20){
        printf("tres bein");
    }
    else if ( A >= 14 && A < 20 ){
        printf("bein");
    }
    else if ( A >= 12 && A < 20){
        printf("passable");
    }
    else if ( A >= 0 && A < 20){
        printf("redouble");
    }
    else{
        printf(" ereur ereur ereur ");
    }
}

int main(){
    float A[10] ;
    int i ;

    for( i = 0 ; i < 10 ; i++){
        printf(" entrer la not d'etudiant N%d : \n" ,i+1);
        scanf("%f" ,& A[i]) ;
        
    }

    for(i = 0 ; i < 10 ; i++ ){
        float temp = A[i] ;
        printf(" etudiant N%d : %.2f \n" , i+1 , A[i] );
        note(temp);
        printf("\n");

    }


return 0;}