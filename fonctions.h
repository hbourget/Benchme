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
    int i,k;
    float swap;
    for(i = 0; i < taille-1; i++)
    {
        for (k = 0; k < taille-i-1; k++)
        {
            if(tab[k] > tab[k+1])
            {
                swap = tab[k];
                tab[k] = tab[k+1];
                tab[k+1] = swap;
            }
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
