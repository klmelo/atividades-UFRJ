/*
Autor: K. L. Melo;
Data: 21/04/2024;
Descrição: Este programa soluciona o seguinte problema: "João deseja fazer bolos usando uma receita que indica que devem ser usadas
2 xícaras de farinha de trigo, 3 ovos e 5 colheres de sopa de leite.
Em casa ele tem A xícaras de farinha de trigo, B ovos e C colheres de sopa de leite.
João não tem muita prática com a cozinha, e portanto ele só se arriscará a fazer
medidas exatas da receita de bolo (por exemplo, se ele tiver material suficiente para
fazer mais do que 2 e menos do que 3 bolos, ele fará somente 2 bolos).
Sabendo disso, escreva um programa que determine qual a quantidade máxima de
bolos que ele consegue fazer.";
Entrada: Três números inteiros;
Saída: A quantidade de bolos que podem ser feitos, no máximo;
Defesa: Números negativos;
*/

#include<stdio.h>
int main(){

    //Dicionário de dados
    int A, B, C;
    int a = 0;
    int b = 0;
    int c = 0;
    int bo = 0;

    //Corpo do programa
    printf("Dê-me a quantidade de xícaras de farinha de trigo, ovos e colheres de sopa de leite, respectivamente, com os valores espaçados. \n");
    scanf("%d %d %d", &A, &B, &C);

    if (A < 0 || B < 0 || C < 0) {
	printf("Não existem valores negativos para os ingredientes. \n");
	return 1;
	}
    
    else while (A >= 2) {
	A -= 2;
	a++;
	
    }
    
    while (B >= 3) {
	B -= 3;
	b++;
    }
    
    while (C >= 4) {
	C -= 4;
        c++;
    }

    while (a > 0 && b > 0 && c > 0) {

	a--;
        b--;
	c--;
	bo++;
	
}

    printf("Até %d bolo(s) pode(m) ser feito(s)! \n", bo);
    return 0;
}
