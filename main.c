#include <stdio.h>
#include <time.h>
#include "fonctions.h"

int main()
{
    int taille = 1000;
    float *tab = getTab(taille);

    clock_t debut = clock();
    triBulle(tab, taille);
    clock_t fin = clock();

    printTab(tab, taille);

    getTime(debut, fin);
}
