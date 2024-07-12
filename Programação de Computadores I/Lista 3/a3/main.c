/*
Autor: K. L. Melo;
Data: 07/07/2024;
Descrição: O programa procura uma palavra em um texto;
Entrada: Um texto e uma palavra;
Saída: Se a palavra está no texto e o índice em que ela se encontra;
Defesa: N/A
*/

#include <stdio.h>
#include <string.h>
#define MAX 100
int procuraPalavra(char texto[], char palavra[]);
int main(void) {
    char texto[MAX];
    char palavra[MAX];
    printf("Digite o texto\n");
    fgets(texto, MAX, stdin);
    printf("Digite a palavra\n");
    fgets(palavra, MAX, stdin);
    if (palavra[strlen(palavra)-1] == '\n') {
	palavra[strlen(palavra)-1] = '\0';
    }
    printf("A palavra '%s' está no texto e o seu índice é %d \n", palavra, procuraPalavra(texto, palavra));
    
    return 0;
}

int procuraPalavra(char texto[], char palavra[]) {
    int tamanhodotexto = strlen(texto);
    int tamanhodapalavra = strlen(palavra);
    int aux=0;

    for (int i=0; i<= tamanhodotexto; i++) {
	if (texto[i] == palavra [aux]) {
	    for( ; aux <= tamanhodapalavra; aux++, i++) {
		if(texto[i] != palavra[aux]) {
		    break;
		}
	    } if ((texto[i] == palavra[tamanhodapalavra])) {
		return i - tamanhodapalavra;
	    }
	}
    } return -1;
}
