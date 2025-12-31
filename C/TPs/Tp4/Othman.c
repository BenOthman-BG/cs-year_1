#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {

    char Nom[50];
    char Prenom[50];
    char D_naissance[50];
    char CIN[50] ;
    char NCM[50] ;

}elc ;

void lecture(elc *t , int n){

    int i ;
    
    for ( i = 0 ; i<n ; i++){
      printf(" electeur %d {\n",i+1);
      printf(" le nom : ");
      scanf("  %[^\n]s" , t[i].Nom);
      printf(" prenom : ");
      scanf("  %[^\n]s" ,t[i].Prenom);
      printf("la date de naissance : ");
      scanf("  %[^\n]s" ,t[i].D_naissance);
      printf(" CIN : ");
      scanf("  %[^\n]s" ,t[i].CIN);
      printf("Numero de carte d'electeur : ");
      scanf("  %[^\n]s" ,t[i].NCM);
      printf("}\n");
    }

}

void elecc(elc *t , int n , char *CIN , char *NCM){

    int i ; 

    for (i = 0 ; i<n ; i++){
        if( strcmp(t[i].CIN , CIN) == 0 ){
            strcpy(NCM , t[i].NCM);
            return;
        }
    }

    strcpy( NCM , " pas de trouver !");
    
}

char * retinfo(elc *t){
    char * infor ;
    infor = malloc(200);
    sprintf(infor , " %s - %s - %s - %s - %s " ,t->Nom , t-> Prenom , t-> CIN , t-> NCM ,t -> D_naissance);
    return infor;

}


int main(){// fonction main 
    elc * t ;
    int n ;// le nomber des electeurs 
    int i ;
    char * infor ;
    char cin[50];
    char ncm[50];
    
    printf(" bonjour ! \n");
    printf(" Entrer le nomber des electeurs : ");
    scanf("%d" ,&n);// demende a l'utilisateur d'entrer le nomber des electeurs

     t = malloc(n*sizeof(elc));//allocation dynamique
     if(t == NULL){
        perror(" Erreur de reserver l'spase ...");
        exit(1);
    }

    lecture(t , n );

    printf(" vous pouverz de rechercher sur un electeur .\n");
    printf(" entrer le CIN d'electeur que vous souhaitez rechercher : \n");
    scanf("  %[^\n]s" ,&cin);

    elecc(t,n,cin,ncm);
    printf(" NCM est : %s .\n" ,ncm);
    printf("\n");


    printf("La list des electeurs : \n");
    for( i = 0 ; i<n ; i++){
        infor = retinfo(&t[i]);
        printf(" | %s | ",infor);
        free(infor);
    }

free(t);

return 0 ;}

