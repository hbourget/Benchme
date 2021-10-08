//
// Created by h.bourget on 08/10/2021.
//
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "fonctions.h"

void writeFile(double moyenne, char *fichier)
{
    FILE *out = fopen( fichier, "a" );
    fprintf(out, "%.5f\n", moyenne);
    fclose(out);
}

void benchBulle(char *fichier)
{
    float temps, moyenne;
    int laTaille;
    int laGraine;
    bool isSorted;

    //Sachant que le tri à bulle à une complexité quadratique, nous utiliserons des valeurs allant de 10^2 à 10^5
    for (int j = 2; j < 6; j++)
    {
        moyenne = 0;
        isSorted = false;
        laTaille = pow(10,j);

        //Définition de 3 tableau différent pour en garder que la moyenne.
        for (int k = 0; k < 3; k++)
        {
            laGraine = k;
            float *tab = getTab(laTaille, laGraine);

            clock_t debut = clock();
            triBulle(tab, laTaille);
            clock_t fin = clock();
            temps = getTime(debut, fin);

            isSorted = verification(tab, laTaille);
            moyenne = moyenne + temps;
        }
        moyenne = moyenne / 3;
        if(isSorted)
        {
            writeFile(moyenne, fichier);
            logInfo(__func__, j, moyenne);
        }
    }
}

void benchSelection(char *fichier)
{
    float temps, moyenne;
    int laTaille;
    int laGraine;
    bool isSorted;

    //Sachant que le tri par selection à une complexité quadratique, nous utiliserons des valeurs allant de 10^2 à 10^5
    for (int j = 2; j < 6; j++)
    {
        moyenne = 0;
        isSorted = false;
        laTaille = pow(10,j);

        //Définition de 3 tableau différent pour en garder que la moyenne.
        for (int k = 0; k < 3; k++)
        {
            laGraine = k;
            float *tab = getTab(laTaille, laGraine);

            clock_t debut = clock();
            triSelection(tab, laTaille);
            clock_t fin = clock();
            temps = getTime(debut, fin);

            moyenne = moyenne + temps;
            isSorted = verification(tab, laTaille);
        }
        moyenne = moyenne / 3;
        if(isSorted)
        {
            writeFile(moyenne, fichier);
            logInfo(__func__, j, moyenne);
        }
    }
}

void benchInsertion(char *fichier)
{
    float temps, moyenne;
    int laTaille;
    int laGraine;
    bool isSorted;

    //Sachant que le tri par insertion à une complexité quadratique, nous utiliserons des valeurs allant de 10^2 à 10^5
    for (int j = 2; j < 6; j++)
    {
        moyenne = 0;
        isSorted = false;
        laTaille = pow(10,j);

        //Définition de 3 tableau différent pour en garder que la moyenne.
        for (int k = 0; k < 3; k++)
        {
            laGraine = k;
            float *tab = getTab(laTaille, laGraine);

            clock_t debut = clock();
            triInsertion(tab, laTaille);
            clock_t fin = clock();
            temps = getTime(debut, fin);

            moyenne = moyenne + temps;
            isSorted = verification(tab, laTaille);
        }
        moyenne = moyenne / 3;
        if(isSorted)
        {
            writeFile(moyenne, fichier);
            logInfo(__func__, j, moyenne);
        }
    }
}

void benchTas(char *fichier)
{
    float temps, moyenne;
    int laTaille;
    int laGraine;
    bool isSorted;

    //Définition de la taille du tableau (10^2 à 10^7)
    for (int j = 2; j < 8; j++)
    {
        moyenne = 0;
        isSorted = false;
        laTaille = pow(10,j);

        //Définition de 3 tableau différent pour en garder que la moyenne.
        for (int k = 0; k < 3; k++)
        {
            laGraine = k;
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
            logInfo(__func__, j, moyenne);
        }
    }
}

