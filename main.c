#include <stdio.h>
#include <time.h>
#include "fonctions.h"

int main()
{
    int taille = 100000; // 10^6
    float *tab = (float*) malloc(sizeof(float)*taille);
    srand(1); // Graine
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

    double time_spent = (double)(fin - debut) / CLOCKS_PER_SEC;
    printf("\nTemps exec: %f", time_spent);
}
