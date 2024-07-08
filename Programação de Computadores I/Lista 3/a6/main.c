#include <stdio.h>
typedef struct{
    int coeficientes[3];
} Polinomio;

int main(void) {
    Polinomio p1, p2;
    printf("Digite os coeficientes do p1, um por um.\n");
    scanf("%d %d %d", &p1.coeficientes[0], &p1.coeficientes[1], &p1.coeficientes[2]);
    printf("Digite os coeficientes do p2, um por um.\n");
    scanf("%d %d %d", &p2.coeficientes[0], &p2.coeficientes[1], &p2.coeficientes[2]);
    if ((p1.coeficientes[0] % p2.coeficientes[0] == 0 && p1.coeficientes[1] % p2.coeficientes[1] == 0 && p1.coeficientes[2] % p2.coeficientes[2] == 0) || (p2.coeficientes[0] % p1.coeficientes[0] == 0 && p2.coeficientes[1] % p1.coeficientes[1] == 0 && p2.coeficientes[2] % p1.coeficientes[2] == 0  )) {
	printf("Verdadeiro\n");
	return 0;
    } else printf("Falso\n");
    return 1;
    
}
