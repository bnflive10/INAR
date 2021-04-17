#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *f;
    f= fopen("texto.txt","w");
    if(f==NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    char texto[20]="Nue que funcionou kk \n";

    int i;

    //escrever arquivo
    /*for (i=0;i<strlen(texto);i++){
        fputc(texto[i],f);
        //fputc('-',f);

        //Ler aquivo
        //int c = fgetc(f);
        //printf("%c",c);
    }*/

    //outra maneira de escrever arquivo
    int retorno = fputs(texto,f);
    fputs("vai que nem\n",f);
    if(retorno==EOF){
        printf("Erro na gravacao!\n");
    }

    fclose(f);

    //outra maneira de ler arquivo
    f= fopen("texto.txt","r");
    //int c = fgetc(f);

    /*while(c!=EOF){
        printf("%c",c);
        c=fgetc(f);
    }*/
    char str[20];
    printf("%s",fgets(str,30,f));

    fclose(f);
    system("pause");
    return 0;
}
