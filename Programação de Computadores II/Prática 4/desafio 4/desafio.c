#include <stdio.h>
#include <string.h>
#define MAX 200

int main(int argc, char* argv[]) {
    const char* entrada = argv[1];
    const char* saida = argv[2];

    FILE *arquivoentrada = fopen(entrada, "r");
    FILE *arquivosaida = fopen(saida, "w");

    char linha[MAX];

    while(fgets(linha, MAX, arquivoentrada)) {
        size_t len = strlen(linha);

        for (int i = len-1; i >= 0; i--) {
            putc(linha[i], arquivosaida);
        }   
        fseek(arquivosaida, -1, SEEK_CUR);
        if (getc(arquivosaida) != '\n')
            putc('\n', arquivosaida);
        fseek(arquivosaida, 0, SEEK_END);
    }   

    fclose(arquivoentrada);
    fclose(arquivosaida);
    return 0;


}

//Não está feito. Falta melhor lógica.