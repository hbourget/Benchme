//
// Created by Admin on 08/10/2021.
//

#ifndef BENCHME_TRI_H
#define BENCHME_TRI_H

/* L'algorithme parcourt le tableau et compare les éléments consécutifs. Lorsque deux éléments consécutifs ne sont pas dans l'ordre, ils sont échangés.*/
void triBulle(float *tab, int taille);

/* Sur un tableau de n éléments (numérotés de 0 à n-1), le principe du tri par sélection est le suivant :
- Rechercher le plus petit élément du tableau, et l'échanger avec l'élément d'indice 0 ;
- Rechercher le second plus petit élément du tableau, et l'échanger avec l'élément d'indice 1 ;
- Continuer de cette façon jusqu'à ce que le tableau soit entièrement trié.*/
void *triSelection(float *tab, int taille);

/* Le tri par insertion considère chaque élément du tableau et l'insère à la bonne place parmi les éléments déjà triés.
 * Ainsi, au moment où on considère un élément, les éléments qui le précèdent sont déjà triés, tandis que les éléments qui le suivent ne sont pas encore triés. */
void triInsertion(float *tab, int taille);

/* Le tri par tas cherche à obtenir un "tas", c'est-à-dire un arbre binaire vérifiant les propriétés suivantes :
la différence maximale de profondeur entre deux feuilles est de 1 (i.e. toutes les feuilles se trouvent sur la dernière ou sur l'avant-dernière ligne) ;
les feuilles de profondeur maximale sont « tassées » sur la gauche.
chaque nœud est de valeur supérieure (resp. inférieure) à celles de ses deux fils, pour un tri ascendant (resp. descendant). */
void tamiser(float *tab, int taille, int i);

void triTas(float *tab, int taille);

#endif //BENCHME_TRI_H
