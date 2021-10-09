#include "bench.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    fclose(fopen(argv[1], "w")); //Nettoyage du fichier des resultats
    benchBulle(argv[1]);
    benchSelection(argv[1]);
    benchInsertion(argv[1]);
    benchTas(argv[1]);
}
