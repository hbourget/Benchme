#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
//#define RAND_MAX 0xffff


int main() {
    float *tableau;
    tableau = malloc(15 * sizeof(float));

    srand(7985465);

    for(int i = 0; i < 15; i ++){
        tableau[i] = rand();
    }

    printf("Tableau\n");

    for(int i = 0; i < 15; i ++){
        printf("%d ",tableau[i]);
    }
    //char *res = triSelection()
    return 0;
}

