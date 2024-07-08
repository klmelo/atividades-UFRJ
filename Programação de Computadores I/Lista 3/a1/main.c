#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void) {
    char palavra[MAX];
    printf("Digite uma palavra\n");
    fgets(palavra, MAX, stdin);
    char reverse[strlen(palavra)];
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
