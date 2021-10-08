#include "bench.h"

int main(int argc, char *argv[])
{
    benchBulle(argv[1]);
    benchSelection(argv[1]);
    benchInsertion(argv[1]);
    benchTas(argv[1]);
}
