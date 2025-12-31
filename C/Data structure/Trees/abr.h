#ifndef abr_h
#define abr_h

#include <stdio.h>

typedef struct Num {
    int number;
    struct Num *right;
    struct Num *left;
} Num;


Num *newNoude(int value);
Num *insert(Num *root, int _number);
void inorder(Num *root);
int search(Num *root, int nbr);
void exportDot(Num *root, FILE *f);
void generateDotFile(Num *root);

#endif 