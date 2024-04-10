/*
Autores: Bianca e Kauã.;
Data: 03/04/2024.;
Descrição: Programa que retorna a média aritmética das dos dois maiores valores apresentados (notas de supostas provas).;
Entrada: Três números pertencentes ao intervalo ]0. 10].;
Saída: A média aritmética dos dois maiores valores dentre os três de entrada.;
Defesa: Números maiores que 10 ou negativos.;
*/


#include<stdio.h>

int main() {

	//Dicionário de dados
	float n1, n2, n3;
	float resposta;
	
	//Corpo do Programa
	printf("Digite as três notas das avaliações: ");
	scanf("%f %f %f", &n1, &n2, &n3);

if ( n1 < 0|| n2 < 0|| n3 < 0 || n1 > 10 || n2 > 10 || n3 > 10) {
	
	printf("As valores não podem ser negativos ou maiores que 10. \n");
	
	return 0;
}

	else if (n1 >= n2 && n3 <= n2) {

		resposta = (n1 + n2)/2;
	}

	else  if (n1 >= n3 && n2 < n3) {

		resposta = (n1 + n3)/2;

	}

	else if (n2 >= n3 && n1 < n3) {

		resposta = (n2 + n3)/2;

	}

	else if (n2 >= n1 && n3 < n1) {

		resposta = (n2 + n1)/2;

	}

	else if (n3 >= n1 && n2 < n1) {

		resposta = (n3 + n1)/2;

	}

	else if (n3 >= n2 && n1 < n2) {

		resposta = (n3 + n2)/2;

	}

	printf("%f \n", resposta);

return 0;




}
