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



 //chercher etudiant 

etudiant* chercher (etudiant *tete){
    etudiant *courant = tete;
    int compteur = 0 ;
    while(courant != NULL){
        compteur++;
        courant = courant -> next ;
    }
    return compteur;
}

// fonction affichier_Taille etudiant


etudiant *affichier_etudiant (etudiant *tete){
    etudiant *courant = tete ;
    int compteur = 0  ;

    while(courant != NULL){
        printf("%s - %d - %.2f\n" ,courant ->nom , courant -> age ,courant -> moyenne );
        courant = courant -> next ;
        compteur++;
    }

    printf("NULL\n");

    printf("%d\n",compteur);
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

etudiant *Ajout_Au_Fin (etudiant *tete , char *_nom , int _age , float _moyenne){
    etudiant * nouvE ;
    etudiant *courant ;
    nouvE = malloc (sizeof(etudiant));
    strcpy(nouvE -> nom , _nom);
    nouvE -> age = _age;
    nouvE -> moyenne = _moyenne;
    nouvE -> next = NULL;

    

    if(tete == NULL){
        return nouvE;
    }
    courant = tete ;
    
    while(courant -> next != NULL){
        courant = courant -> next ;
    }
    courant -> next = nouvE ;
    return tete ;
}

// ajouter mileu 

etudiant *Ajout_Au_mileu(etudiant *tete , char *_nom , int _age , float _moyenne , int S ){
    etudiant * nouvE ;
    etudiant *courant ;
    etudiant *courant2 ;
    nouvE = malloc (sizeof(etudiant));
    strcpy(nouvE -> nom , _nom);
    nouvE -> age = _age;
    nouvE -> moyenne = _moyenne;
    nouvE -> next = NULL;

      if(tete == NULL){
        return nouvE;
    }
    courant = tete ;
    courant2 = tete ;

    int x = 2 ;
    int y = 2 ;

    do{
    courant = courant -> next ;
    x++;
    }while(x < S );

    do{
    courant2 = courant2 -> next ;
    y++;
    }while(y < S+1 );
    
    
    courant -> next = nouvE ;
    nouvE -> next = courant2;
    return tete ;

    
}


// fonction main

int main(){

    int compteur ;


    etudiant *tete = NULL;
     char nom_charcher[] = "Othman" ;

        // apres l'ajout d'un list : 

        printf("Apres l'ajout d'un list chainee :\n");

        tete = Ajout_Au_debut(tete ,"ohayou" , 16 , 18.5);
        tete = Ajout_Au_debut(tete ,"othman" , 99 , 18.5);
        tete = Ajout_Au_debut(tete ,"hamza" , 10 , 18.5);
        tete = Ajout_Au_debut(tete ,"real madrid " , 16 , 18.5);
        affichier_etudiant(tete);

        // apres l'ajout a fin 

        tete = Ajout_Au_Fin(tete ,"uuuuu" , 7 , 1.9);
        affichier_etudiant(tete);
    

    printf("_________________ Apres la recharche ________________\n");

    etudiant *trouver = recherche_etudiant(tete ,nom_charcher);

    if(trouver != NULL){
        printf("element %s est trouver\n" ,nom_charcher);
        }else{
            printf("element %s non trouver \n",nom_charcher);
        }

        compteur = chercher(tete);

        printf("veuillez entrer le nombre de liste quie tu veux de ajouter : \n");
        int S ;
        scanf("%d" ,&S);

        if(S <= 0  || S > compteur){
            printf("ERREUR...le nombre de list n'exist pas \n");
        }else if (S == 1 ){
         tete = Ajout_Au_debut(tete ,"real madrid " , 16 , 18.5 );
        affichier_etudiant(tete);
        }else{
          tete = Ajout_Au_mileu(tete ,"real madrid " , 16 , 18.5 , S);
        affichier_etudiant(tete);
        }

     

return 0 ;}

