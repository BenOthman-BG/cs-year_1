/*inseret un nomber dans un tableau*/
#include <stdio.h>

int main(){

    int a ;
    int b , i , c , d ,e;

    hog :

printf("entrer la taille de votre tableau : \n");
scanf("%d" ,&a);

if(a <= 0){
     printf("ERURE\n ");

     goto hog ;
}

int T[a];

printf("maintenan remplire le tableau : \n");

for(i=0 ; i<a ; i++){
    printf("T[%d] = " ,i+1);
    scanf("%d" ,&T[i]);
}

printf("Alor tu peu changer un namber dans le tableau : \n");

debut:

printf("entrer le nomber du classe du tableau : \n");
scanf("%d" ,&b);

if (b > a || b < 0 ){
    printf("ERURE\n ");

    goto debut ;
}
else{
    printf("le nomber de tableau est : T[%d] \n" ,b);

}

printf("entrer le nouveau nomber :\n ");
scanf("%d" ,&c);

T[b-1] = c ;

printf("le nouveau tableau : \n");

for(i=0 ; i<a ; i++){
    printf("T[%d] =  %d \n" ,i+1,T[i]);
   
}

printf("mintenent tu peu modifier un nomber : \n");

debuts:

printf("entrer le nomber du classe du tableau : \n");
scanf("%d" ,&d);

if (d > a  || d < 0 ){
    printf("ERURE\n ");

    goto debuts ;
}
else{
    printf("le nomber de tableau est : T[%d] \n" ,d);

}

T[a]=T[a+1];

printf("entrer le nouveau nomber :\n ");
scanf("%d" ,&e);

T[d-1] = e;

printf("le nouveau tableau : \n");

for(i=0 ; i<a+1 ; i++){
    printf("T[%d] =  %d \n" ,i+1,T[i]);
   
}






return 0 ;}