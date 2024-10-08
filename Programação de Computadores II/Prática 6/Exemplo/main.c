#include <stdio.h>
//#define MAX 150

int main (void) {
    float numeros[150];
    float maior = 0;
    char nomearq[100];

    printf("Digite o nome do arquivo\n");

    fgets(nomearq, 100, stdin);


    size_t len = strlen(nomearq);
    if (len > 0 && nomearq[len - 1] == '\n') {
        nomearq[len - 1] = '\0';
    }

    FILE* arquivo = fopen(nomearq, "r");

    size_t lidos = 0;
    while (lidos < 150 && fscanf(arquivo, "%f", &numeros[lidos]) == 1) {
        lidos++;
    }

    
    for (size_t j = 0; j<=sizeof(arquivo); j++) {
        if(numeros[j] > maior) maior = numeros[j];
    }

    fclose(arquivo);
    printf("\n%f\n", maior);

    return 0;
}