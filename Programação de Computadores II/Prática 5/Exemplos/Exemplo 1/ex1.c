#include <stdio.h>
int main(void) {
    FILE* arquivo = fopen("meu_texto2.txt", "w");

    if(!(arquivo)) {
        printf("\nErro de leitura\n");
        return 1;
    }

    int i = 3;
    float j = 6.9;
    char cadeia[] = "uma cadeia";

    fprintf(arquivo, "%d\n%f\n%s", i, j, cadeia);

    fclose(arquivo);
    return 0;
}