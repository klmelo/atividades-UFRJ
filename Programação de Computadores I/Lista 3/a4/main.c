#include <stdio.h>
#include <string.h>
#define MAX 100
void converteParaMaiusculas(char texto[]);

int main(void) {
    char texto[MAX];
    printf("Digite sua string\n");
    fgets(texto, MAX, stdin);
    converteParaMaiusculas(texto);
    return 0;
}

void converteParaMaiusculas(char texto[]) {
    for (int i = 0; i < strlen(texto) - 1; i ++) {
	if (texto[i] == 32) {
	    continue;
	} else texto[i] -= 32;
    }
    puts(texto);
}
