/*
Autor: K. L. Melo;
Data: 11/05/2024;
Descrição: Programa que usa uma função baseada no método de Newton para encontrar aproximações precisas de raizes quadradas.;
Entrada: Um número racional.;
Saída: O número de entrada e as raízes alcançadas pela função "sqrt", math.h, e a minha função "raiz".;
Defesa: Números negativos.
*/
#include <stdio.h>
#include <math.h>
double raiz(double n);
int main(){
    double n;
    printf("Diga-me o número n \n");
    scanf("%lf", &n);
    if(n<0) {
	printf("Não existem raízes reais para números negativos. \n");
    } else
	printf("O número lido foi %lf, a raiz calculada com sqrt da math.h é %lf e a raiz calculada pela minha função é %lf. \n", n, sqrt(n), raiz(n));
    return 0;
}
double raiz(double n){
    if (n < 1e-6) {
	return 0.0;
    }
    double x0 = 10;
    double x_antigo;
    do {
	x_antigo = x0;
	x0 = x0 - (pow(x0, 2)-n)/(2*x0);
    }
    while(fabs(x0 - x_antigo) >= 1e-6);
    return x0;
}
