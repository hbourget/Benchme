//
// Created by Admin on 08/10/2021.
//

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

double getTime(clock_t debut, clock_t fin)
{
    double time_spent = (double)(fin - debut) / CLOCKS_PER_SEC;
    return time_spent;
}

bool isSorted(float *tab, int taille)
{
    bool ret = true;
    for (int i = 0; i < taille; i++)
    {
        if(i+1 < taille)
        {
            if((tab[i] - tab[i+1]) > 0)
            {
                ret = false;
                break;
            }
        }
    }
    return ret;
}

void writeLabel(char *nomFonction, char *fichier)
{
    FILE *out = fopen( fichier, "a" );
    fprintf(out, "%s\n", nomFonction);
    fclose(out);
}

void writeValue(double moyenne, int num, char *fichier)
{
    FILE *out = fopen( fichier, "a" );
    fprintf(out, "10^%d,%.6f\n", num, moyenne);
    fclose(out);
}

void logInfo(char *nomFonction, int num, double moyenne)
{
    printf("%s - Tri de 10^%d valeurs - Temps moyen: %.6f secondes\n", nomFonction,num,moyenne);
}

