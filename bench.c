//
// Created by h.bourget on 08/10/2021.
//
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <assert.h>
#include "fonctions.h"

void writeFile(double temps, char *fichier)
{
    printf("%s", fichier);
    FILE *out = fopen( fichier, "a" );
    fprintf(out, "%.5f\n", temps);
    fclose(out);
}

void testBulle(char *fichier)
{
    float temps, moyenne;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 2; k < 5; k++)
        {
            int laTaille = pow(10,k);
            int laGraine = j;
            float *tab = getTab(laTaille, laGraine);
            clock_t debut = clock();
            triBulle(tab, laTaille);
            clock_t fin = clock();
            temps = getTime(debut, fin);
            bool isSorted = verification(tab, laTaille);
            moyenne = moyenne + temps;
            moyenne = moyenne / 3;
            if(isSorted)
            {
                writeFile(moyenne, fichier);
            }
            else
            {
                printf("Le tableau n'est pas trié");
            }
        }
    }
}

void testTas(char *fichier)
{
    float moyenne, temps;
    for (int j = 2; j < 8; j++)
    {
        moyenne = 0;
        bool isSorted = false;
        int laTaille = pow(10,j);
        for (int k = 0; k < 3; k++)
        {
            int laGraine = k;
            float *tab = getTab(laTaille, laGraine);
            clock_t debut = clock();
            triTas(tab, laTaille);
            clock_t fin = clock();
            temps = getTime(debut, fin);
            moyenne = moyenne + temps;
            isSorted = verification(tab, laTaille);
        }
        moyenne = moyenne / 3;
        if(isSorted)
        {
            writeFile(moyenne, fichier);
        }
    }
}

