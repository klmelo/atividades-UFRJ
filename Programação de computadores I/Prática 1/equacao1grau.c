#include<stdio.h>

int main() {
	double a, b;
	double x;

	printf("Digite os coeficientes a e b, respectivamente, da equação do primeiro grau. \n");
	scanf("%lf %lf", &a, &b);
	
	x= -b/a;

	printf("A resolu eh: %lf \n", x);

return 0;
}

	
