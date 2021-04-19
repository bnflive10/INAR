#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

int main()
{
    ArvBin* raiz = cria_ArvBin();

    //verificar se esta vazia
    int x = estaVazia_ArvBin(raiz);
    //if(estaVazia_ArvBin(raiz))

    //libera_ArvBin(raiz);

    //altura da arvore
    //x = altura_ArvBin(raiz);

    //x = totalNO_ArvBin(raiz);

    preOrdem_ArvBin(raiz);

    return 0;
}
