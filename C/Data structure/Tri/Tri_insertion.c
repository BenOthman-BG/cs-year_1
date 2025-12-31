// se programme va trie un tableau d'ordre croissant par inserion 




#include <stdio.h>

//Declare les fonction


// fonction principale 

int main (){

    int n ,i ; 

    printf("veuilllez saisir la taille de votre tableau : ");
    scanf("%d" ,&n);

    int T[n];

    printf("remplire votre tableau : \n");

    for (i= 0 ; i< n ;i++){
        printf(" T[%d] = " ,i+1);
        scanf("%d" ,&T[i]);
    }

  TriInsertion(T , n);
  //apres insertion 
      printf("Le nouvaux Tableau apres le tri :\n ");

    for(int i = 0 ; i < n ; i++ ){
        printf("T[%d] = %d " ,i+1,T[i]);
        printf("\n");
    }


  




return 0 ;}


//  fonction d'insertion le tavleau 


void TriInsertion (int T[] , int taille){

    for (int i = 1 ; i < taille ; i++){

        int tmp = T[i] ;
        int j = i -1 ;

        while (tmp > T[j] && j >= 0){

            T[j+1] = T[j];
            j--;
        }
        T[j+1] = tmp ;
    }
}






