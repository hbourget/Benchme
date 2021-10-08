//
// Created by h.bourget on 06/10/2021.
//

#ifndef BENCHME_FONCTIONS_H
#define BENCHME_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Obtenir un tableau avec une taillet et un seed donné
float *getTab(int taille, int graine);

//Obtenir le temps de bench d'un tri
double getTime(clock_t debut, clock_t fin);

//Verifie si un tableau est bien trillé dans l'ordre croissant
bool verification(float *tab, int taille);

//Retourne des informations à l'utilisateur dans la console
void logInfo(char *nomFonction, int num, float moyenne);

//Algo tri à bulle
void triBulle(float *tab, int taille);

/* Sur un tableau de n éléments (numérotés de 0 à n-1), le principe du tri par sélection est le suivant :
- Rechercher le plus petit élément du tableau, et l'échanger avec l'élément d'indice 0 ;
- Rechercher le second plus petit élément du tableau, et l'échanger avec l'élément d'indice 1 ;
- Continuer de cette façon jusqu'à ce que le tableau soit entièrement trié.*/
void *triSelection(float *tab, int taille);

/* */
void triInsertion(float *tab, int taille);

/* */
void tamiser(float *tab, int taille, int i);

/* */
void triTas(float *tab, int taille);

#endif //BENCHME_FONCTIONS_H
