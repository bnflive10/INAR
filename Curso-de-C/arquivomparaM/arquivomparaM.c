#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

    char c = fgetc(f1);
    while(!feof(f1)){
            fputc(toupper(c),f2);
        c=getc(f1);
    }
    fclose(f1);
    fclose(f2);
    f2 = fopen("texto1.txt","r");

    c = fgetc(f2);
    while(!feof(f2)){
            printf("%c",c);
        c=getc(f2);
    }

system("pause");
    return 0;
}

