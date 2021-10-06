//
// Created by h.bourget on 06/10/2021.
//

#ifndef BENCHME_FONCTIONS_H
#define BENCHME_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int len(float *tab){
    int j;
    for(int i = 0; tab[i]!=-1;i++){
        j=i;
        printf("val i: %d\n",j);
    }
    j++;
    return j;
}

void *triBulle(float *tab)
{
    //Hugo
}

void *triSelection(float *tab)
{
    printf("len: %d", len(tab));
}

void *triInsertion(float *tab)
{

}

void *triTas(float *tab)
{
    //Hugo
}

#endif //BENCHME_FONCTIONS_H
