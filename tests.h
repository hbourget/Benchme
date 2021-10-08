//
// Created by h.bourget on 08/10/2021.
//

#ifndef BENCHME_TESTS_H
#define BENCHME_TESTS_H

void writeFile(double temps, char fichier[])
{
    char nom[sizeof(fichier)];
    strcpy(nom,fichier);

    char fileSpec[strlen(nom)+1];
    FILE *out;

    snprintf( fileSpec, sizeof( fileSpec ), "%s", nom );

    out = fopen( fileSpec, "w" );
    fclose(out);
}
#endif //BENCHME_TESTS_H
