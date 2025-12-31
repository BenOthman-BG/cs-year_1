/*delet a namber of a table */
#include <stdio.h>

int main(){

    int a ;
    int b , i ;

    hog :

printf("entrer la taille de votre tableau : ");
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


printf("mintenent tu peu supremer un element sur le tableau : \n ");

debut:

printf("entrer le nomber du classe du tableau : ");
scanf("%d" ,&b);

if (b > a || b < 0 ){
    printf("ERURE\n ");

    goto debut ;
}
else{
    printf("le nomber de tableau est : T[%d] \n" ,b);

}
for(i=0 ; i<a ; i++){
    if(i != b-1 ){
        printf("T[%d] =  %d \n" ,i+1,T[i]);
    }
}



return 0 ;}