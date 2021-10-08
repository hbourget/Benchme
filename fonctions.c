//
// Created by h.bourget on 06/10/2021.
//

#ifndef BENCHME_FONCTIONS_H
#define BENCHME_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

float *getTab(int taille, int graine)
{
    float *tab = (float*) malloc(sizeof(float)*taille);
    srand(graine); // Graine
    for (int i=0;i<taille;i++)
    {
        tab[i] = ((float)rand() / (float)(RAND_MAX)) * taille;
    }
    return tab;
}

void printTab(float *tab, int taille)
{
    for(int i = 0; i < taille; i++)
    {
        printf("\n%f ", tab[i]);
    }
}

double getTime(clock_t debut, clock_t fin)
{
    double time_spent = (double)(fin - debut) / CLOCKS_PER_SEC;
    return time_spent;
}

bool verification(float *tab, int taille)
{
    bool ret = true;
    for (int i = 0; i < taille; i++)
    {
        if(i+1 < taille)
        {
            int a = tab[i];
            int b = tab[i+1];
            if((tab[i] - tab[i+1]) > 0)
            {
                ret = false;
                break;
            }
        }
    }
    return ret;
}

void triBulle(float *tab, int taille)
{
    int i, k;
    float swap;
    bool test;
    for (i = 0; i < taille-1; i++)
    {
        test = false;
        for (k = 0; k < taille-i-1; k++)
        {
            if (tab[k] > tab[k+1])
            {
                swap = tab[k];
                tab[k] = tab[k+1];
                tab[k+1] = swap;
                test = true;
            }
        }
        if (!test)
        {
            break;
        }
    }
}

void *triSelection(float *tab, int taille)
{
    int i,k, pos;
    float swap;
    for (i = 0; i < taille-1; i++) //Recherche de l'element minimum (n-1) fois
    {
        pos = i;
        for (k = i + 1; k < taille; k++)
        {
            if (tab[pos] > tab[k])
                pos = k;
        }
        if (pos != i)
        {
            swap = tab[i];
            tab[i] = tab[pos];
            tab[pos] = swap;
        }
    }
}

void triInsertion(float *tab, int taille)
{
    int i, j;
    float x;
    for (i = 1; i < taille; i++)
    {
        //Mémoriser tab[i] dans "memo"
        x = tab[i];

        j = i - 1;

        /* Décaler les éléments tab[0]..tab[i-1] qui sont plus grands que "x", en partant de tab[i-1] */
        while (j >= 0 && tab[j] > x)
        {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = x;
    }
}

void tamiser(float *tab, int taille, int i)
{
    int plusGrand = i; // Racine
    int gauche = 2 * i + 1; // gauche = 2 * racine + 1
    int droit = 2 * i + 2; // right = 2 * racine + 2
    float swap;

    // Si le nombre enfant à gauche est plus grand que la racine "plusGrand"
    if (gauche < taille && tab[gauche] > tab[plusGrand])
    {
        plusGrand = gauche;
    }

    // Si le nombre enfant à droite est plus grand que la racine "plusGrand"
    if (droit < taille && tab[droit] > tab[plusGrand])
    {
        plusGrand = droit;
    }

    // Si le plus grand n'est pas la racine de l'arbre
    if (plusGrand != i)
    {
        swap = tab[i];
        tab[i] = tab[plusGrand];
        tab[plusGrand] = swap;

        // Tassement récursif du sous arbre
        tamiser(tab, taille, plusGrand);
    }
}

void triTas(float *tab, int taille)
{
    float temp;
    // Construction de l'arbre
    for (int i = taille / 2 - 1; i >= 0; i--)
    {
        tamiser(tab, taille, i);
    }

    // Extraction des elements 1 par 1
    for (int i = taille - 1; i > 0; i--) {
        // Deplacement de la racine actuelle à la fin
        temp = tab[0];
        tab[0] = tab[i];
        tab[i] = temp;

        tamiser(tab, i, 0);
    }
}

#endif //BENCHME_FONCTIONS_H