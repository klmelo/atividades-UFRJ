/*
Autor: K. L. Melo;
Data: 07/07/2024;
Descrição: O programa diz se uma palavra é um palíndromo ou não.;
Entrada: uma palavra
Saída: Confirmação de ser ou não palíndromo.;
Defesa: N/A
*/


#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
	//variáveis
    char palavra[MAX];
    char reverse[strlen(palavra)];
    printf("Digite uma palavra\n");
    fgets(palavra, MAX, stdin);
    if (palavra[strlen(palavra) - 1 == '\n']) {
	palavra[strlen(palavra) - 1] = '\0';
    }
    int j = 0;
    for (int i = strlen(palavra) - 1; i >= 0 - 1; i--) {
	reverse[j++] = palavra[i];
    }
    reverse[j] = '\0';
    if(strcmp(palavra, reverse)) {
	printf("A palavra não é um palíndromo\n");
	return 0;
    } else printf("A plavra é um palíndromo\n");
    return 0;
}
