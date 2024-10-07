#include <stdio.h>
#define MAX 100

int main(void) {
    FILE* arquivo = fopen("meu_texto.txt", "r");

    if(arquivo == NULL) {
        printf("\nErro na leitura\n");
        return 1;
    }
    int i;
    float j;
    char cadeia[MAX];

    fscanf(arquivo, "%d", &i);
    fscanf(arquivo, "%f", &j);
    fscanf(arquivo, " %255[^\n]", cadeia);

    printf("%d\n", i);
    printf("%f\n", j);
    puts(cadeia);

    fclose(arquivo);
    return 0;
}