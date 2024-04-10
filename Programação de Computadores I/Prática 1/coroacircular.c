#include<stdio.h>

int main() {

	double r1;
	double r2;
	double resposta;

printf("Escreva r1 e r2 respectivamenteh \n");
scanf("%lf %lf", &r1, &r2);

if (r1 > r2) {
	resposta = 3.14 * r1 * r1 - 3.14 * r2 * r2;
}

else { 
       resposta = 3.14 * r2 * r2 - 3.14 * r1 * r1;
}

printf("%.2lf \n", resposta);

return 0;
}
