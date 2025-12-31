 /*Tableau resauuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuux */

 #include <stdio.h>

 int main(){


int a ; 
int i ;


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


return 0 ; }