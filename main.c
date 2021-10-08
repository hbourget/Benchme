#include <time.h>
#include <assert.h>
#include <stdio.h>
#include "fonctions.h"
#include "tests.h"

int main(int argc, char *argv[])
{
    int taille = 10000;
    float *tab1 = getTab(taille, 1);
    float *tab2 = getTab(taille, 2);
    float *tab3 = getTab(taille, 3);

    clock_t debut = clock();
    //triBulle(tab, taille);
    //triSelection(tab, taille);
    triInsertion(tab1, taille);
    //triTas(tab, taille);

    clock_t fin = clock();

    printTab(tab1, taille);

    double temps = getTime(debut, fin);
    assert(verification(tab1, taille));

    printf("\n%s", argv[1]);
    writeFile(temps, argv[1]);
}
