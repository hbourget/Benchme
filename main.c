#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"



int main() {
    float *tableau;
    int j;
    tableau = malloc(150 * sizeof(float));

    srand(76655);

    for(int i = 0; i < 149; i ++){
        tableau[i] = rand();

    }

    printf("Tableau\n");

    for(int i = 0; i < 149; i ++){
        printf("i:\t%d\t%.3f\n", i,tableau[i]);
        j=i;
    }
    printf("====================\n");

    triSelection(tableau, 149);

    printf("====================\n");
    for(int i = 0; i < 149; i ++){
        printf("i:\t%d\t%.3f\n", i,tableau[i]);
        j=i;
    }
    printf("====================\n");
    return 0;
}

