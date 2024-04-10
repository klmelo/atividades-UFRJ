/*
Autores: Bianca e Kauã;
Data: 03/04/2024;
Descrição: Alguns números inteiros de 3 algarismos que se elevados ao cubo e somados dão o próprio número;
Entrada: Um número inteiro positivo de 3 digitos;
Saída: sim ou não;
Defesa: O número tem que ter 3 digitos e ser positivo;
*/


#include<stdio.h>

int main () {

	//dicionário de dados
	int x;
	int c, d, u;
	//corpo do programa
	
	printf("Digite um número positivo de 3 algarismos. \n");
	scanf("%d", &x);

	c = x/100;

	d = (x%100)/10;

	u = x%10;
	
	if(!(x > 99 && x < 1000)) {
		printf("O número não cumpre os requisitos. \n");
	return 0;
}

	else if(((c * c * c) + (d * d * d) + (u * u * u)) == x) {
		printf("O número cumpre a condição. \n");
	}

	else printf("O número não cumpre a condição. \n");

return 0;

}
