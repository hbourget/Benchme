//
// Created by h.bourget on 08/10/2021.
//

#ifndef BENCHME_BENCH_H
#define BENCHME_BENCH_H

// Ecriture de la moyenne pour la taille n dans le fichier de sortie
void writeFile(double temps, char *fichier);

void benchBulle(char *fichier);

void benchSelection(char *fichier);

void benchInsertion(char *fichier);

void benchTas(char *fichier);

#endif //BENCHME_BENCH_H
