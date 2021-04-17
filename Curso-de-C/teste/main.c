#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct no{
    char nome,rua;
    int idade,numero;

} pessoa;

int main()
{
   pessoa p[4];
   p[0].idade=20;
   p[1].idade=21;

   printf("%d %d",p[0].idade,p[1].idade);
    return 0;
}
