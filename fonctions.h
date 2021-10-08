//
// Created by h.bourget on 06/10/2021.
//

#ifndef BENCHME_FONCTIONS_H
#define BENCHME_FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

float *getTab(int taille, int graine);

void printTab(float *tab, int taille);

double getTime(clock_t debut, clock_t fin);

bool verification(float *tab, int taille);

void triBulle(float *tab, int taille);

void *triSelection(float *tab, int taille);

void triInsertion(float *tab, int taille);

void tamiser(float *tab, int taille, int i);

void triTas(float *tab, int taille);

#endif //BENCHME_FONCTIONS_H
