//
// Created by h.bourget on 06/10/2021.
//

#ifndef BENCHME_FONCTIONS_H
#define BENCHME_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void triBulle(float *tab, int taille)
{
    //Hugo
}

void triSelection(float *tab, int taille)
{
    int i,k, pos;
    float swap;
    for (i = 0; i < taille-1; i++) //Recherche de l'element minimum (n-1) fois
    {
        pos = i;
        for (k = i + 1; k < taille; k++)
        {
            if (tab[pos] > tab[k])
                pos = k;
        }
        if (pos != i)
        {
            swap = tab[i];
            tab[i] = tab[pos];
            tab[pos] = swap;
        }
    }
}

void triInsertion(float *tab, int taille)
{
    int i, j;
    float x;
    for (i = 1; i < taille; i++)
    {
        //Mémoriser tab[i] dans "memo"
        x = tab[i];

        j = i - 1;

        /* Décaler les éléments tab[0]..tab[i-1] qui sont plus grands que "x", en partant de tab[i-1] */
        while (j >= 0 && tab[j] > x)
        {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = x;
    }
}

void triTas(float *tab, int taille)
{
    //Hugo
}

#endif //BENCHME_FONCTIONS_H
