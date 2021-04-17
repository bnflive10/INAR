#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

int main()
{
    Grafo *gr;
    gr = cria_grafo(10,7,0);

    insereAresta(gr,0,1,0,0);
    insereAresta(gr,1,3,0,0);
    removeAresta(gr,0,1,0);

    libera_grafo(gr);
    return 0;
}
