#include <stdio.h>
#include <time.h>
#include "fonctions.h"

int main()
{
    int taille = 25000;
    float *tab = (float*) malloc(sizeof(float)*taille);
    srand(1);
    for (int i=0;i<taille;i++)
    {
        tab[i] = ((float)rand() / (float)(RAND_MAX)) * taille;
    }

    clock_t debut = clock();
    triBulle(tab, taille);
    clock_t fin = clock();

    for(int i = 0; i < taille; i++)
    {
        printf("\n%f ", tab[i]);
    }

    float time_spent = (float)(debut - fin) / CLOCKS_PER_SEC;
    printf("\nTemps exec: %f", time_spent);
}
