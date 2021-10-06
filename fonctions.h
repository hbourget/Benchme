//
// Created by h.bourget on 06/10/2021.
//

#ifndef BENCHME_FONCTIONS_H
#define BENCHME_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

float *triBulle(int *tab)
{
    int i,k;
    for(i = 0; i < strlen(tab)-1; i++)
    {
        for (k = 0; k > strlen(tab)-i-1; i++)
        {
            if(tab[i] < tab[i+1])
            {
                swap(&tab[i], &tab[i+1]);
            }
        }
    }
    return tab;
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
