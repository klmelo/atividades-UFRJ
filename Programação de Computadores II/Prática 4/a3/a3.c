#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    const char *nome_arquivo = argv[1];
    const char *padrao = argv[2];


    FILE* arquivo = fopen(nome_arquivo, "r");

    /*if(strstr(padrao, nome_arquivo == NULL))
        printf("\nNão há nada aqui\n");*/
    
  

    int nLinha = 0;
    char linha[81]; //Uma linha tem até 80 caracteres;

    while (fgets(linha, sizeof(linha), arquivo)) {
        nLinha++;
        if (strstr(linha, padrao)) {
            printf("Linha %d: %s", nLinha, linha);
        }
    }
    fclose(arquivo);
    return 0;


}