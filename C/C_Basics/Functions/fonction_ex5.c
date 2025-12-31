#include <stdio.h>

void decompose(int n) {
    // Commencer avec le plus petit facteur premier, 2
    int diviseur = 2;

    printf("Décomposition en facteurs premiers de %d : ", n);

    // Diviser n par 2 jusqu'à ce qu'il ne soit plus divisible par 2
    while (n % diviseur == 0) {
        printf("%d ", diviseur);
        n /= diviseur;
    }

    // Passer aux diviseurs impairs à partir de 3
    diviseur = 3;
    while (diviseur * diviseur <= n) {
        while (n % diviseur == 0) {
            printf("%d ", diviseur);
            n /= diviseur;
        }
        diviseur += 2;
    }

    // Si n est un nombre premier supérieur à 2, l'afficher
    if (n > 2) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int n;

    // Demander à l'utilisateur d'entrer un nombre entier
    printf("Entrez un nombre entier n (> 1) : ");
    scanf("%d", &n);

    // Vérifier que le nombre est supérieur à 1
    if (n <= 1) {
        printf("Veuillez entrer un nombre supérieur à 1.\n");
    } else {
        decompose(n);
    }

    return 0;
}
