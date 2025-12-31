#include <stdio.h> 
#include <stdlib.h>
#include<string.h>

//1_notre structure 

typedef struct CEN {
    char nom[50] ;
    char prenom[50];
    int age ;
    struct CEN * next ;

}CEN ;

//2_fonction cree


// ------------------------------

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

    // Declarer les noeuds
    while (courant != NULL) {
        fprintf(f, "  node%d [label=\"{Nom: %s | Prenom: %s | Age: %d}\"];\n", index, courant->nom, courant->prenom, courant->age);
        if (courant->next != NULL) {
            fprintf(f, "  node%d -> node%d;\n", index, index + 1);
        }
        courant = courant->next;
        index++;
    }

    fprintf(f, "}\n");
    fclose(f);

    printf("Fichier DOT genere avec succes : %s\n", filename);
}


CEN * Ajouter_personne ( CEN *tete , char *nom_ , char *prenom_ , int age_ ){
  CEN * nouvPersonne ;
  
  nouvPersonne = malloc(sizeof(CEN));
  
  strcpy(nouvPersonne -> nom , nom_);
  strcpy(nouvPersonne -> prenom , prenom_);
  nouvPersonne -> age = age_ ;

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
    int i = 1 ; 

    while(courant != NULL){
        printf("%d.| %s | %s | %d | \n" ,i,courant ->nom , courant -> prenom ,courant -> age );
        courant = courant -> next ;
        i++;
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

CEN * modifier_Nom(CEN*tete , int pos , char *N_nom){
    CEN*courant = tete;

  
    int taill = affichier_taill(tete);

    if(pos < 1 || pos > taill){
        printf("Position Erreure ...");
        return tete ;
        free(courant);
    }
    if(pos == 1){
        strcpy(tete -> nom , N_nom);
        return tete;
    }
  int i ;
  for(i = 1 ; i< pos ; i++){
    courant = courant -> next ;
  }
   strcpy(courant -> nom , N_nom);
   return tete;
}

//----------------------

CEN * modifier_prenom(CEN*tete , int pos , char *N_prenom){
    CEN*courant = tete;

  
    int taill = affichier_taill(tete);

    if(pos < 1 || pos > taill){
        printf("Position Erreure ...");
        return tete ;
        free(courant);
    }
    if(pos == 1){
        strcpy(tete -> prenom , N_prenom);
        return tete;
    }
  int i ;
  for(i = 1 ; i< pos ; i++){
    courant = courant -> next ;
  }
   strcpy(courant -> prenom , N_prenom);
   return tete;
}

//-----------------------

CEN * modifier_age(CEN*tete , int pos , int N_age){
    CEN*courant = tete;

  
    int taill = affichier_taill(tete);

    if(pos < 1 || pos > taill){
        printf("Position Erreure ...");
        return tete ;
        free(courant);
    }
    if(pos == 1){
        tete -> age = N_age;
        return tete;
    }
  int i ;
  for(i = 1 ; i< pos ; i++){
    courant = courant -> next ;
  }
   courant -> age = N_age;
   return tete;
}
//_ reverse list 

CEN * reverse_list(CEN * tete){

    CEN * precedent =  NULL ;
    CEN * prochaine = NULL ;
    CEN * courant = tete ;

    while (courant != NULL){
        prochaine = courant -> next ;
        courant -> next = precedent ;
        precedent = courant ;
        courant = prochaine ;
    }
     
    printf(" la list etait reverse avec sacces .");
    tete = precedent ;
    return tete ;
}



//7_fonction main 

int main(){
    int choix ;
    int taille;
    char nom[50];
    char prenom[50];
    int age ;
    int pos ;
    int M_choix;

    CEN *tete = NULL ;
do {
    printf("\nMenu : \n 1-ajouter person \n 2-Affichier personne\n 3-Voir le nomber des personnes \n 4-suprimer personne \n 5_Modifier personne \n 6_reverse la liste \n 7_ change to Graphe\n 0-Quiter\nVotre choix : ");
    scanf("%d" ,&choix);

    switch(choix){
     case 1:
        printf(" Nom : ");
        scanf("  %[^\n]s" ,nom);
        printf(" prenom : ");
        scanf("  %[^\n]s" ,prenom);
        printf(" age : ");
        scanf("%d" ,&age);
        tete = Ajouter_personne(tete ,nom, prenom ,age);
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
        printf("\nMenu .\n1. Nom\n2. Prenom\n3. age\n0. Quiter\nvotre Modification : ");
        scanf("%d" ,&M_choix);
        switch(M_choix){
            case 1:
            printf("Nouveau nom : ");
            scanf("  %[^\n]s" ,nom);
            tete = modifier_Nom(tete,pos,nom);
            break;
            case 2: 
            printf("Nouveau prenom : ");
            scanf("  %[^\n]s" ,prenom);
            tete = modifier_prenom(tete,pos,prenom);
            break;
            case 3: 
            printf("Nouveau age : ");
            scanf("%d" ,&age);
            tete = modifier_age(tete,pos,age);
            break;
        }
       }while(M_choix != 0 );
       break;
    case 6 :
       tete = reverse_list(tete);
       break;
    case 7 : 
    generer_graphviz(tete, "liste.dot");
    break;

       
    }

}while(choix != 0 );


    


return 0 ; }