//
// Created by h.bourget on 06/10/2021.
//

#ifndef BENCHME_FONCTIONS_H
#define BENCHME_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

public char *triBulle(char *tab)
{
    for (int i = 0; i < strlen(tab); i++)
    {
        if(tab[i] > tab[i+1])
        {
            tab[i] = tab[i+1];
        }
    }
}

public char *triSelection(char *tab)
{

}

public char *triInsertion(char *tab)
{

}

public char *triTas(char *tab)
{

}

#endif //BENCHME_FONCTIONS_H
