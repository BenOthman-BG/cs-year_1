/*entrer deux nomber : 
si ont le meme signe --> changer les deux entre eux 
si non --> a = a + b 
           b = a * b 
*/

#include <stdio.h>

/*fonction echange */

void echange (int *pa , int *pb){

    int tmp ;

    tmp = *pa ;
    *pa = *pb  ;
    *pb = tmp;

printf("on a : a = %d \n" ,*pa);
printf("on a : b = %d \n" ,*pb);
}

/*fonction somme et produit */

void deffirent (int *pa , int *pb ){
    int S , P ;

    S = *pa + *pb ;
    P = *pa * *pb ;
    *pa = S ;
    *pb = P ;


 printf("on a : a = %d \n" ,*pa);
 printf("on a : b = %d \n" ,*pb);

}


/*fonction principale */

int main (){

    int a , b ;

    printf("veuillez saisir les deux nomber , a et b : \n");
    scanf("%d",&a);
     scanf("%d",&b);
     printf("a = %d \n",a);
     printf("b = %d \n",b);

     if (a * b > 0 ){
        printf("les deux nomber sont le meme signe :\n");
     
 echange(&a ,&b);
     }else{
           printf("les deux nomber ne sont pas le meme signe :\n");
        deffirent(&a , &b);
     }

   



return 0 ;}