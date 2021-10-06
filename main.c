#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"



int main() {
    float *tableau;
    int j;
    tableau = malloc(15 * sizeof(float));

    srand(76655);

    for(int i = 0; i < 8; i ++){
        tableau[i] = rand();

    }

    printf("Tableau\n");

    for(int i = 0; i < 8; i ++){
        printf("i:\t%d\t%.3f\n", i,tableau[i]);
        j=i;
    }
    j++;
    tableau[j] = -1.0;
    printf("i:\t%d\t%.3f\n", j,tableau[j]);

    triSelection(tableau);

    return 0;
}

