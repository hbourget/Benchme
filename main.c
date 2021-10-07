#include <time.h>
#include <assert.h>
#include "fonctions.h"

int main()
{
    int taille = 3;
    float *tab = getTab(taille);

    clock_t debut = clock();
    //triBulle(tab, taille);
    //triSelection(tab, taille);
    clock_t fin = clock();

    printTab(tab, taille);
    getTime(debut, fin);

    assert(verify(tab,taille));

}
