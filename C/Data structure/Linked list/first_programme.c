/*
Cours les listes simplement chainees :
@ Creation /oui
@ Affichage /oui
@ Taille /oui
@ Recherche /non
@ Ajout /non
@ Suppression /non
@ Modification /non
@ Circulaire /non
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct etudiant {

    char nom[50];
    int age ;
    float moyenne;
    struct etudiant *next ;
}etudiant;

//fonction creer etudiant 

etudiant *cree_etudiant (char *_nom , int _age , float _moyenne){
    etudiant *nouvE = malloc (sizeof(etudiant));
    if(nouvE == NULL){
        perror("cann't reserve space .");
        exit(1);
    }

    strcpy(nouvE -> nom , _nom);
    nouvE -> age = _age ;
    nouvE -> moyenne = _moyenne;

    nouvE -> next = NULL ;

    return nouvE ;
}

// fonction affichier_Taille etudiant 

etudiant *affichier_etudiant (etudiant *tete){
    etudiant *courant = tete ;

    while(courant != NULL){
        printf("%s - %d - %.2f\n" ,courant ->nom , courant -> age ,courant -> moyenne );
        courant = courant -> next ;
    }

    printf("NULL\n");

}

// affichier_taill 

etudiant *affichier_taill (etudiant *tete){
    etudiant *courant = tete ;
    int compteur = 0  ;

    while(courant != NULL){
        courant = courant -> next ;
        compteur++;
    }
    return compteur ;

}

//fonction recherche etuadiant ;

etudiant *recherche_etudiant (etudiant *tete  , char nom_charcher[] ){

    etudiant *courant = tete ;

    while(courant != NULL){
        if(strcmp(courant -> nom , nom_charcher) == 0 ){
          return courant ;
        }

        courant = courant -> next ;
    }

    return NULL ;

}

//Ajout etudiant : Debut 

etudiant * Ajout_Au_debut(etudiant *tete , char *_nom , int _age , float _moyenne){
    etudiant *nouvDonnee ;

    nouvDonnee = malloc(sizeof(etudiant));
    strcpy(nouvDonnee -> nom , _nom );
    nouvDonnee -> age = _age;
    nouvDonnee -> moyenne = _moyenne;
    nouvDonnee -> next = NULL; 

    if(tete != NULL){
        nouvDonnee ->next = tete;
    }
    tete = nouvDonnee;
    return tete;

     
}

//Ajouter etudiant : fin 

etudiant *Ajout_Au_Fin (etudiant *queue , char *_nom , int _age , float _moyenne){
    etudiant * nouvE ;
    nouvE = malloc (sizeof(etudiant));
    strcpy(nouvE -> nom , _nom);
    nouvE -> age = _age;
    nouvE -> moyenne = _moyenne;
    nouvE -> next = NULL;

    if(queue != NULL){
        nouvE -> next = NULL ;
    }
    queue -> next = nouvE ;
    return queue;
}

//Ajouter etudaint : Moiyenne 

etudiant * Ajout_Au_Moiyenne(etudiant *tete , char *_nom , int _age , float _moyenne , int nb_t){

    etudiant *nouvDonnee ;
    
    nouvDonnee = malloc(sizeof(etudiant));
    strcpy(nouvDonnee -> nom , _nom );
    nouvDonnee -> age = _age;
    nouvDonnee -> moyenne = _moyenne;
    nouvDonnee -> next = NULL;

    if(tete == NULL){
        return nouvDonnee;
    }

    int taill = affichier_taill(tete);

    if( nb_t < 1 || nb_t > taill + 1){
        printf(" Taill erreur ....");
        free(nouvDonnee);
        return tete;
    }

    if( nb_t == 1 ){
        nouvDonnee -> next = tete ;
        tete = nouvDonnee ; 
        return tete ;
    }

    etudiant * courant = tete ;
    int i ;

    for(i = 1 ; i< nb_t -1 ; i++){
        courant = courant -> next ;
    }

    nouvDonnee -> next = courant -> next ;
    courant -> next  =  nouvDonnee ;
    return tete ;

}



int main(){


    etudiant *tete = NULL;
     char nom_charcher[] = "Othman" ;
    
    etudiant *premier = cree_etudiant("Othman" ,18 ,16.5);
    etudiant *deuxieme = cree_etudiant("Hamza" ,15 ,19.6);
    etudiant *queue = cree_etudiant("ALi" ,18 ,17.7);


    tete = premier ;
    premier -> next = deuxieme ;

    deuxieme -> next = queue ;
    queue -> next = NULL ;

    affichier_etudiant(tete);

    printf("_________________ Apres la recharche ________________\n");

    etudiant *trouver = recherche_etudiant(tete ,nom_charcher);

    if(trouver != NULL){
        printf("element %s est trouver\n" ,nom_charcher);
        }else{
            printf("element %s non trouver \n",nom_charcher);
        }

        // apres l'ajout d'un list : 

        printf("Apres l'ajout d'un list chainee :\n");

        tete = Ajout_Au_debut(tete ,"ohayou" , 16 , 18.5);
        affichier_etudiant(tete);

        // apres l'ajout a fin 

        queue = Ajout_Au_Fin(queue ,"7_1" , 7 , 1.9);
        affichier_etudiant(tete);
         printf(" la taill est : %d \n" , affichier_taill(tete));
         
        int NV_TA ;

        printf("entrer le classement dans la taill de votre nouveau etudiant : ");
        scanf("%d" ,&NV_TA);

        tete = Ajout_Au_Moiyenne(tete , "hammm" , 77 , 99 , NV_TA);
         affichier_etudiant(tete);
        printf(" la taill est : %d " , affichier_taill(tete));





return 0 ;}

