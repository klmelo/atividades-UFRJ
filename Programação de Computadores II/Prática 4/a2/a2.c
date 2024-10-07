#include <stdio.h>
#include <ctype.h>

int main(void){
    FILE* entrada = fopen("entrada.txt", "r");
    FILE* saida = fopen("saida.txt", "w");

    if (entrada == NULL) { 
        printf("\nEntrada invalida\n");
        return 1;
    }

    char c, d;
    while ((c = fgetc(entrada)) != EOF) {
        fputc(toupper(c), saida);
    }
    fclose(entrada);
    fclose(saida);

    return 0;
}