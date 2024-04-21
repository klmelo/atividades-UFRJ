/*
Autor: K. L. Melo;
Data: 20/04/2024;
Descrição: Programa que retorna o(s) ano(s), mes(es) e dia(s) de vida de uma pessoa quando se é dado os dias totais de vida como entrada;
Entrada: Um número inteiro;
Saída: A quantidade de anos, meses e dias de vida de alguém;
Defesa: Números negativos.
*/

#include<stdio.h>

int main(){

    //Dicionário de dados
    int i;
    int anos = 0;
    int meses = 0;


    //Corpo do programa
    printf("Digita a idade em dias da pessoa. \n");
    scanf("%d", &i);

    if (i<0) {
	printf("Não existem idades negativas. Utilize um valor válido. \n");
	return 0;
    }

    else

	while (i >= 365){
	    i -= 365;
	    anos++;
    }

    while (i >=30) {
	i -= 30;
	meses++;
    }

    printf("A pessoa tem %d ano(s), %d mes(es) e %d dia(s) de vida. \n", anos, meses, i);

    return 0;
}
