 /*Tableau pair impair */

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

int X[a] ;
int Y[a] ;
int o , m ; 
o = 0 ;
m = 0 ; 
for(i=0 ; i<a ; i++){
    if(T[i]%2 == 0 ){

        X[o] = T[i];
        o++;
    }
    else{
        
        Y[m] = T[i] ;
        m++;
    }
}

printf("les nomber impaire sont : \n");

for(i=0 ; i< m ; i++){
    printf("Im[%d] = %d \n" ,i+1,Y[i]);
}

printf("les nomber pair sont : \n");

for(i=0 ; i< o ; i++){
    printf("P[%d] = %d \n" ,i+1,X[i]);
}




return 0  ;}