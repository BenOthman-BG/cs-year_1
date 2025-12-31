// se programme va trie un tableau d'ordre croissant par inserion 

#include <stdio.h>

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

/*maintenant on va modifier un nomber */
 
 int t ;

printf("pour ajouter un nomber dans votre tableau qui deja trie :\n ");
printf("veuillez entrer le nomber de chiffres que tu peu modifier : \n");
scanf("%d" ,&t);
printf("maintenant tu peu modifier les nombre : \n");
int H[t];
for(i = 0 ; i<t ; i++){
    scanf("%d" ,&H[i]);
}

T[n] = T[n+t] ;

int pos ;
int x = 0 ;

do {

 pos = 0 ;
 

for(i=0 ; i < n+t ; i++){
    if (T[i]  < H[x] ){
        pos ++ ;
    }
    else {
        break ;
    }
}

for (i = n+x+1  ; i > pos ; i--){

  T[i] = T[i-1] ;
  
}
T[pos] = H[x] ;

x++ ;

}while( x < t);

      printf("Le nouvaux Tableau apres le tri :\n ");

    for( i = 0 ; i < n+t ; i++ ){
        printf("T[%d] = %d " ,i+1,T[i]);
        printf("\n");
    }



return 0 ;}


//  fonction d'insertion le tavleau 


void TriInsertion (int T[] , int taille){

    for (int i = 1 ; i < taille ; i++){

        int tmp = T[i] ;
        int j = i -1 ;

        while (tmp < T[j] && j >= 0){

            T[j+1] = T[j];
            j--;
        }
        T[j+1] = tmp ;
    }
}






