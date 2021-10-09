//
// Created by Admin on 08/10/2021.
//

#ifndef BENCHME_MISC_H
#define BENCHME_MISC_H

//Obtenir un tableau avec une taillet et un seed donné
float *getTab(int taille, int graine);

//Obtenir le temps de bench d'un tri
double getTime(clock_t debut, clock_t fin);

//Verifie si un tableau est bien trillé dans l'ordre croissant
bool isSorted(float *tab, int taille);

// Ecriture du label de la fonction en entete des valeurs
void writeLabel(char const *nomFonction, char *fichier);

// Ecriture de la moyenne pour la taille "n" dans le fichier de sortie
void writeValue(double moyenne, int num, char *fichier);

//Retourne des informations à l'utilisateur dans la console
void logInfo(char const *nomFonction, int num, double moyenne);

#endif //BENCHME_MISC_H
