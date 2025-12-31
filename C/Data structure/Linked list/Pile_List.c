#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int value;
    struct Node* next;
} Node;


typedef struct {
    Node* top;    
    Node* front;  
    Node* rear;   
} Liste;


Node* createNode(int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erreur d'allocation!\n");
        exit(1);
    }
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}



// Ajouter (push)
void push(Liste* liste, int value) {
    Node* newNode = createNode(value);
    newNode->next = liste->top;
    liste->top = newNode;
}

// Supprimer (pop)
void pop(Liste* liste) {
    if (liste->top == NULL) {
        printf("Pile vide!\n");
        return;
    }
    Node* temp = liste->top;
    liste->top = liste->top->next;
    free(temp);
}

// Afficher PILE
void afficherPile(Liste* liste) {
    Node* courant = liste->top;
    printf("Pile (Top -> Bottom):\n");
    while (courant != NULL) {
        printf("| %d |\n", courant->value);
        courant = courant->next;
    }
    printf("NULL\n");
}



// Ajouter (enqueue)
void enqueue(Liste* liste, int value) {
    Node* newNode = createNode(value);
    if (liste->rear == NULL) { // file خالية
        liste->front = liste->rear = newNode;
    } else {
        liste->rear->next = newNode;
        liste->rear = newNode;
    }
}

// Supprimer (dequeue)
void dequeue(Liste* liste) {
    if (liste->front == NULL) {
        printf("File vide!\n");
        return;
    }
    Node* temp = liste->front;
    liste->front = liste->front->next;
    if (liste->front == NULL) {
        liste->rear = NULL; 
    }
    free(temp);
}


void afficherFile(Liste* liste) {
    Node* courant = liste->front;
    printf("File (Front -> Rear):\n");
    while (courant != NULL) {
        printf("| %d | -> ", courant->value);
        courant = courant->next;
    }
    printf("NULL\n");
}


int main() {
    Liste liste;
    liste.top = NULL;
    liste.front = NULL;
    liste.rear = NULL;

    int choix, val;

    do {
        printf("\n=== Menu ===\n");
        printf("1. Push Pile (Ajouter)\n");
        printf("2. Pop Pile (Supprimer)\n");
        printf("3. Afficher Pile\n");
        printf("4. Enqueue File (Ajouter)\n");
        printf("5. Dequeue File (Supprimer)\n");
        printf("6. Afficher File\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                printf("Donner une valeur: ");
                scanf("%d", &val);
                push(&liste, val);
                break;
            case 2:
                pop(&liste);
                break;
            case 3:
                afficherPile(&liste);
                break;
            case 4:
                printf("Donner une valeur: ");
                scanf("%d", &val);
                enqueue(&liste, val);
                break;
            case 5:
                dequeue(&liste);
                break;
            case 6:
                afficherFile(&liste);
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide!\n");
        }

    } while(choix != 0);

    return 0;
}