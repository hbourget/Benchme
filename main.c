#include <time.h>
#include <assert.h>
#include "fonctions.h"

int main()
{
    int taille = 3;
    float *tab = getTab(taille);

    clock_t debut = clock();
    triBulle(tab, taille);
    clock_t fin = clock();

    printTab(tab, taille);

    assert(verify(tab,taille));

    getTime(debut, fin);
}
