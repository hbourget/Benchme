//
// Created by h.bourget on 06/10/2021.
//

#ifndef BENCHME_FONCTIONS_H
#define BENCHME_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

float *getTab(int taille)
{
    float *tab = (float*) malloc(sizeof(float)*taille);
    srand(3); // Graine
    for (int i=0;i<taille;i++)
    {
        tab[i] = ((float)rand() / (float)(RAND_MAX)) * taille;
    }
    return tab;
}

void printTab(float *tab, int taille)
{
    for(int i = 0; i < taille; i++)
    {
        printf("\n%f ", tab[i]);
    }
}

void getTime(clock_t debut, clock_t fin)
{
    double time_spent = (double)(fin - debut) / CLOCKS_PER_SEC;
    printf("\nTemps exec: %f", time_spent);
}

void triBulle(float *tab, int taille)
{
    int i, k;
    float swap;
    bool test;
    for (i = 0; i < taille-1; i++)
    {
        test = false;
        for (k = 0; k < taille-i-1; k++)
        {
            if (tab[k] > tab[k+1])
            {
                swap = tab[k];
                tab[k] = tab[k+1];
                tab[k+1] = swap;
                test = true;
            }
        }
        if (!test)
        {
            break;
        }
    }
}

void *triSelection(char *tab)
{

}

void *triInsertion(char *tab)
{

}

void *triTas(char *tab)
{

}

#endif //BENCHME_FONCTIONS_H
