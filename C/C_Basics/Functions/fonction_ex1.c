#include <stdio.h>
#include <stdio.h>

int A , B ;

void saisir (){
     printf("veuillez saisir la valeure du A : \n");
    scanf("%d" ,&A);
    printf("veuillez saisir la valeure du B : \n");
    scanf("%d" ,&B);
}

void signe (){
  if (A * B > 0 ){
    printf("les deux nomber sont de meme signe .\n");
  }
  else {
    printf("les deux nomber sont de signe different .\n");
  }
}

int maximant (){
    int max ;
    if( A > B ){
        max = A;
    }
    else {
        max = B ;
    }
     return max ;
}
int minimant (){
    int min ;
    if( A > B ){
        min = B ;
    }
    else{
        min = A ;
    }
     return min ;
}

int main(){

    int max , min ;

 
    saisir();
    signe(A,B);
    max = maximant(A,B);
    min = minimant(A,B);

    printf("le maximant est : %d \n" ,max);
    printf("le minimant est : %d \n" ,min);
  
      saisir();
    signe(A,B);
    max = maximant(A,B);
    min = minimant(A,B);

    printf("le maximant est : %d \n" ,max);
    printf("le minimant est : %d \n" ,min);
  
      saisir();
    signe(A,B);
    max = maximant(A,B);
    min = minimant(A,B);

    printf("le maximant est : %d \n" ,max);
    printf("le minimant est : %d \n" ,min);
  



return 0;}