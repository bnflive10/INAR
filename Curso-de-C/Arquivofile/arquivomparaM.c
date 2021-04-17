#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f1,*f2;

    f1= fopen("texto.txt","r");
    f2= fopen("texto1.txt","w");

    if(f1==NULL || f2==NULL){
        printf("Erro ao abrir\n");
        system("pause");
        exit(1);
    }


system("pause");
    return 0;
}
