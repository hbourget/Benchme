#include <stdio.h>
#include "fonctions.h"

int main()
{
    int taille = 100;
    float *tab = (float*) malloc(sizeof(float)*taille);
    for (int i=0;i<taille;i++)
    {
        tab[i] = ((float)rand() / (float)(RAND_MAX)) * taille;
    }

    triBulle(tab, taille);

    for(int i = 0; i < taille; i++)
    {
        printf("\n%f ", tab[i]);
    }
}
