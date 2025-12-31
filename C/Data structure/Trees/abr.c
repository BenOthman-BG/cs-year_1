#include <stdio.h>
#include <stdlib.h>
#include "abr.h"


Num *newNoude(int value) {
    Num *noude = malloc(sizeof(Num));
    noude->number = value;
    noude->right = NULL;
    noude->left = NULL;
    return noude;
}

Num *insert(Num *root, int _number) {
    if (root == NULL) {
        return newNoude(_number);
    }
    if (_number < root->number) {
        root->left = insert(root->left, _number);
    }
    if (_number > root->number) {
        root->right = insert(root->right, _number);
    }
    return root;
}


void inorder(Num *root) {
    if (root != NULL) {
        inorder(root->left);
        printf(" %d ", root->number);
        inorder(root->right);
    }
}

int search(Num *root, int nbr) {
    if (root == NULL) {
        return 0;
    }
    if (nbr == root->number) {
        return 1;
    }
    if (nbr < root->number) {
        return search(root->left, nbr);
    } else {
        return search(root->right, nbr);
    }
}

void exportDot(Num *root, FILE *f) {
    if (root == NULL) return;

    if (root->left != NULL) {
        fprintf(f, "    %d -> %d;\n", root->number, root->left->number);
        exportDot(root->left, f);
    }

    if (root->right != NULL) {
        fprintf(f, "    %d -> %d;\n", root->number, root->right->number);
        exportDot(root->right, f);
    }
}

void generateDotFile(Num *root) {
    FILE *f = fopen("tree.dot", "w");
    if (f == NULL) {
        printf("Erreur d'ouverture de fichier.\n");
        return;
    }

    fprintf(f, "digraph BST {\n");
    exportDot(root, f);
    fprintf(f, "}\n");

    fclose(f);
    printf("Fichier DOT généré : tree.dot\n");
}