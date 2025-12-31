#include <stdio.h> 
#include <stdlib.h>
#include<string.h>

//1_notre structure 

typedef struct CEN {
   int value;
    struct CEN * next ;

}CEN ;

//2_fonction cree



void generer_graphviz(CEN *tete, const char *filename) {
    FILE *f = fopen(filename, "w");
    if (!f) {
        printf("Erreur lors de la création du fichier DOT\n");
        return;
    }

    fprintf(f, "digraph G {\n");
    fprintf(f, "  node [shape=record];\n");

    CEN *courant = tete;
    int index = 0;

    // Déclarer les noeuds
    while (courant != NULL) {
        fprintf(f, "  node%d [label=\"{Value: %d }\"];\n", index, courant->value);
        if (courant->next != NULL) {
            fprintf(f, "  node%d -> node%d;\n", index, index + 1);
        }
        courant = courant->next;
        index++;
    }

    fprintf(f, "}\n");
    fclose(f);

    printf("Fichier DOT généré avec succès : %s\n", filename);
}


CEN * Ajouter_personne ( CEN * tete , int _value){
  CEN * nouvPersonne ;
  
  nouvPersonne = malloc(sizeof(CEN));
  
  
  nouvPersonne -> value = _value ;

  nouvPersonne -> next = NULL ;

  if(tete != NULL){
    nouvPersonne -> next = tete ;
  }
  tete = nouvPersonne ;
  return tete ; 
}


//3_fonction affichier

void affichier_personne (CEN *tete){
    CEN *courant = tete ;
  

    while(courant != NULL){
        printf("| %d | \n" ,courant -> value );
        courant = courant -> next ;
        
    }

    printf("NULL\n");
}


//4_fonction taill 

int affichier_taill (CEN *tete){
    CEN *courant = tete ;
    int compteur = 0  ;

    while(courant != NULL){
        courant = courant -> next ;
        compteur++;
    }
    return compteur ;

}
//6_suprimer_debet

CEN *suprimer_personne (CEN * tete , int pos){

    CEN*courant1 = tete;
    CEN*courant2 = tete;
  
    int taill = affichier_taill(tete);

    if(pos < 1 || pos > taill){
        printf("Position Erreure ...");
        return tete ;
    }

    if(tete == NULL){
        printf(" ERREUR...");
        return tete;
    }
    if(pos == 1 ){
        courant1 = tete ;
        tete = tete  -> next;
        free(courant1);
        return tete;
    }

  int i ;
  for(i = 1 ; i< pos-1 ; i++){
    courant1 = courant1 -> next ;
  }
  for(i = 1 ; i< pos ;i++){
      courant2 = courant2 -> next ;
  }

  courant1 -> next = courant2 -> next;

  free(courant2);

  return tete;

  

}

//7_modifier_personne 


//-----------------------

CEN * modifier_age(CEN*tete , int pos , int _value){
    CEN*courant = tete;


  
    int taill = affichier_taill(tete);

    if(pos < 1 || pos > taill){
        printf("Position Erreure ...");
        return tete ;
        free(courant);
    }
    if(pos == 1){
        tete -> value = _value;
        return tete;
    }
  int i ;
  for(i = 1 ; i< pos ; i++){
    courant = courant -> next ;
  }
   courant -> value = _value;
   return tete;
}
//reverse 

CEN * reverse (CEN*tete ){

    int taill = affichier_taill(tete);

     CEN*precedent = NULL;
      CEN*prochaine = NULL;
      CEN*courant = tete;

      while(courant != NULL){
        prochaine = courant -> next;
        courant -> next = precedent ;
        precedent = courant ;
        courant = prochaine;
        
      }
      tete = precedent ;
  

     return tete ;
}

//7_fonction main 

int main(){
    int choix ;
    int taille;
    int nomber ;
    int pos ;
    int M_choix;

    CEN *tete = NULL ;
do {
    printf("\nMenu : \n 1-ajouter nomber \n 2-Affichier nomber\n 3-Voir la taille des nombers \n 4-suprimer nomber \n 5_Modifier nomber\n 6_reverse list\n 7.To Graphe\n0-Quiter\nVotre choix : ");
    scanf("%d" ,&choix);

    switch(choix){
     case 1:
        printf(" nomber : ");
        scanf("%d" ,&nomber);
        tete = Ajouter_personne(tete ,nomber);
       break;
    case 2: affichier_personne(tete);
       break;
    case 3:
        taille = affichier_taill(tete);
        printf("la taille est : %d \n " ,taille );
       break;
    case 4: 
       printf(" entrer la position de presonne : \n");
       scanf("%d" ,&pos);
       tete = suprimer_personne(tete , pos);
       break;
    case 5: 
       printf(" entrer la position de presonne : \n");
       scanf("%d" ,&pos);
       do{
        printf("\nMenu .\n1. nomber\n0. Quiter\nvotre Modification : ");
        scanf("%d" ,&M_choix);
        switch(M_choix){
            case 1: 
            printf("Nouveau age : ");
            scanf("%d" ,&nomber);
            tete = modifier_age(tete,pos,nomber);
            break;
        }
       }while(M_choix != 0 );
       break;
    case 6 :
    tete = reverse(tete);
    break;
    case 7 :
    generer_graphviz(tete, "othman.dot");
    break;
    }

}while(choix != 0 );


    


return 0 ; }