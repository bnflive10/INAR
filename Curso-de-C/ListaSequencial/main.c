#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h"
int main()
{
    Lista *li;

    li=cria_lista();

    int x;

    //x = tamanho_lista(li);
    //printf("%i",x);

//    x = lista_cheia(li);
//    if(lista_cheia(li))
//
//    x = lista_vazia(li);
//    if(lista_vazia(li))


    struct aluno dados_aluno;
    dados_aluno.matricula = 123456;
    strcpy (dados_aluno.nome, "Bernardino das Neves");
  // função para copiar o nome do aluno para o vetor de char
    dados_aluno.n1 = 10;
    dados_aluno.n2 = 9;
    dados_aluno.n3 = 8;
    x = insere_lista_final(li, dados_aluno);
    printf("%s",dados_aluno.nome);

    return 0;
}
