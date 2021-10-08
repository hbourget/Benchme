//
// Created by h.bourget on 08/10/2021.
//
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include "misc.h"
#include "tri.h"

void benchBulle(char *fichier)
{
    double temps, moyenne;
    int laTaille;
    int laGraine;
    bool sorted;

    writeLabel(__func__, fichier);

    //Sachant que le tri à bulle à une complexité quadratique, nous utiliserons des valeurs allant de 10^2 à 10^5
    for (int j = 2; j < 6; j++)
    {
        moyenne = 0;
        laTaille = pow(10,j);

        //Définition de 3 tableau différent pour en garder que la moyenne.
        for (int k = 0; k < 3; k++)
        {
            laGraine = k;
            float *tab = getTab(laTaille, laGraine);
            sorted = false;

            clock_t debut = clock();
            triBulle(tab, laTaille);
            clock_t fin = clock();
            temps = getTime(debut, fin);

            sorted = isSorted(tab, laTaille);

            moyenne = moyenne + temps;
        }
        moyenne = moyenne / 3;
        if(sorted)
        {
            writeValue(moyenne, j, fichier);
            logInfo(__func__, j, moyenne);
        }
    }
}

void benchSelection(char *fichier)
{
    float temps, moyenne;
    int laTaille;
    int laGraine;
    bool sorted;

    writeLabel(__func__, fichier);

    //Sachant que le tri par selection à une complexité quadratique, nous utiliserons des valeurs allant de 10^2 à 10^5
    for (int j = 2; j < 6; j++)
    {
        moyenne = 0;
        laTaille = pow(10,j);

        //Définition de 3 tableau différent pour en garder que la moyenne.
        for (int k = 0; k < 3; k++)
        {
            laGraine = k;
            float *tab = getTab(laTaille, laGraine);
            sorted = false;

            clock_t debut = clock();
            triSelection(tab, laTaille);
            clock_t fin = clock();
            temps = getTime(debut, fin);

            moyenne = moyenne + temps;

            sorted = isSorted(tab, laTaille);
        }
        moyenne = moyenne / 3;
        if(sorted)
        {
            writeValue(moyenne, j, fichier);
            logInfo(__func__, j, moyenne);
        }
    }
}

void benchInsertion(char *fichier)
{
    float temps, moyenne;
    int laTaille;
    int laGraine;
    bool sorted;

    writeLabel(__func__, fichier);

    //Sachant que le tri par insertion à une complexité quadratique, nous utiliserons des valeurs allant de 10^2 à 10^5
    for (int j = 2; j < 6; j++)
    {
        moyenne = 0;
        laTaille = pow(10,j);

        //Définition de 3 tableau différent pour en garder que la moyenne.
        for (int k = 0; k < 3; k++)
        {
            laGraine = k;
            float *tab = getTab(laTaille, laGraine);
            sorted = false;

            clock_t debut = clock();
            triInsertion(tab, laTaille);
            clock_t fin = clock();
            temps = getTime(debut, fin);

            moyenne = moyenne + temps;

            sorted = isSorted(tab, laTaille);
        }
        moyenne = moyenne / 3;
        if(sorted)
        {
            writeValue(moyenne, j, fichier);
            logInfo(__func__, j, moyenne);
        }
    }
}

void benchTas(char *fichier)
{
    float temps, moyenne;
    int laTaille;
    int laGraine;
    bool sorted;

    writeLabel(__func__, fichier);

    //Définition de la taille du tableau (10^2 à 10^7)
    for (int j = 2; j < 8; j++)
    {
        moyenne = 0;
        laTaille = pow(10,j);

        //Définition de 3 tableau différent pour en garder que la moyenne.
        for (int k = 0; k < 3; k++)
        {
            laGraine = k;
            float *tab = getTab(laTaille, laGraine);
            sorted = false;

            clock_t debut = clock();
            triTas(tab, laTaille);
            clock_t fin = clock();
            temps = getTime(debut, fin);

            moyenne = moyenne + temps;

            sorted = isSorted(tab, laTaille);
        }
        moyenne = moyenne / 3;
        if(sorted)
        {
            writeValue(moyenne, j, fichier);
            logInfo(__func__, j, moyenne);
        }
    }
}

