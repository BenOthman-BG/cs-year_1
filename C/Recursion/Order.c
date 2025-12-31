/*fonction recursive Ordere croissant , Ordere Decroissant*/

# include <stdio.h>

/*fonction recursive */
int croissant (int a){

    int S ;
  if (a!=0){
    S = croissant(a-1);
    printf("%d  : " ,a);
  }

  return S ;
}

int decroissant (int a){

    int S ;
  if (a!=0){
     printf("%d  : " ,a);
    S = decroissant(a-1);
   
  }

  return S ;
}


/*fonction principale */

int main (){

    int n ;
    int i ;

    printf("please enter a nambere : ");
    scanf("%d" ,&n);
    croissant(n);
    printf("\n : ");
    decroissant(n);




return 0 ;}