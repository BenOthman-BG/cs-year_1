 /*Tableau par ordere croissant  */

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

int tmp ;
int j ;

printf("maintenan remplire le tableau : \n");

for(i=0 ; i<a ; i++){
    printf("T[%d] = " ,i+1);
    scanf("%d" ,&T[i]);
}


printf("les etaps : \n");

do {

 for(i=0 ; i<a-1 ; i++){
 
    for(j=i+1 ; j<a ; j++){
        if(T[i] < T[j]){
         
        tmp = T[i] ;
        T[i] = T[j] ;
        T[j] = tmp;
        break ;
        }
    }  
 }

}while()

 printf(" Le nouvaux Tableau : \n\n");


for(i=0;i<a ;i++){

    printf("T[%d] = %d \n" ,i+1,T[i]);/*valider*/
}


return 0 ; }