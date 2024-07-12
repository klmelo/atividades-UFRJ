/*
Autor: K. L. Melo;
Data: 07/07/2024;
Descrição: O programa imprime o inverso de uma string;
Entrada: Uma palavra;
Saída: A palavra ao contrário;
Defesa: N/A
*/


#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void){
    char string[MAX];
    fgets(string, MAX, stdin);
    int x = strlen(string) - 1;
    char rev[x];
    for(int i = 0; i <= x; i++) {
	rev[i] = string[x - i];
    }
    rev[x+1] = '\0';
    puts(rev);
    return 0;
}
