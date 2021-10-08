//
// Created by Admin on 08/10/2021.
//

#ifndef BENCHME_TRI_H
#define BENCHME_TRI_H

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

#endif //BENCHME_TRI_H
