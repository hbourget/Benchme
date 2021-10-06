#include <stdio.h>
#include "fonctions.h"

int main()
{
    float monTableau[] = {9,1,2,3,5,4,1};
    int taille = 7;

    triBulle(monTableau, taille);

    for(int i = 0; i < taille; i++)
    {
        printf("%.2f ", monTableau[i]);
    }
}
