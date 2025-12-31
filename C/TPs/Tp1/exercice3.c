#include <stdio.h>

int T[10];
int i , min , max , S ;

void entrer (){
        printf("veuillez entrer les dix valeure : \n");
     for(i=0 ; i<10 ;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",& T[i]);
     
}

}

int minimant (){


      min = T[0];
      for(i=1 ; i<10 ;i++){
           if(min > T[i] ){
            min = T[i] ;}}


    return min;
      }

int maximant (){

      max = T[0];
      for(i=1 ; i<10 ;i++){
                   if(max < T[i] ){
            max = T[i] ;}
      }


    return max ;
}

int moyenne (){


S = 0 ;

for(i=0 ; i < 10 ; i++ ){

    S = S + T[i];
}
  


    return S ;
}

int main (){


    int min , max , M;

entrer();
min = minimant();
max = maximant();
M = moyenne();
printf("la moyenne est : %d \n",M);
printf("le minimant est : %d\n",min);
printf("le maximant est : %d \n",max);

entrer();
min = minimant();
max = maximant();
M = moyenne();
printf("la moyenne est : %d \n",M);
printf("le minimant est : %d\n",min);
printf("le maximant est : %d \n",max);
   

   entrer();
min = minimant();
max = maximant();
M = moyenne();
printf("la moyenne est : %d \n",M);
printf("le minimant est : %d\n",min);
printf("le maximant est : %d \n",max);
   

   entrer();
min = minimant();
max = maximant();
M = moyenne();
printf("la moyenne est : %d \n",M);
printf("le minimant est : %d\n",min);
printf("le maximant est : %d \n",max);
   
   

    return 0 ;
}