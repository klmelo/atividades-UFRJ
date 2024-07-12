/*
Autor: K. L. Melo;
Data: 07/07/2024;
Descrição: O programa ordena pessoas por idade e verifica se uma idade dada pelo usuário é uma das idades das pessoas;
Entrada: Dados de n pessoas e uma idade qualquer;
Saída: O nome da pessoa cuja idade é a mesma da digitada ou que não há pessoas com essa idade;
Defesa: N/A
*/


#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    int idade;
    float peso;
    char nome[MAX];
}Pessoa;

int busca(int j, Pessoa v[], int x) {
    int inicio = 0;
    int fim = j - 1; // Tamanho do vetor

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (v[meio].idade == x) {
            return meio; // Retorna o índice do elemento encontrado
        } else if (v[meio].idade < x) { // se mudar "<" para ">" vira busca com vetor crescente
            fim = meio - 1; // Busca na metade superior
        } else {
            inicio = meio + 1; // Busca na metade inferior
        }
    } return -1;
}
int main(void){
    int j;
    printf("digite a quantidade de pessoas\n");
    scanf("%d", &j);
    Pessoa lista[j];

//Obtendo os dados das pessoas

    for(int i = 0; i < j; i++){
	printf("Digite a idade da pessoa %d \n", i);
	scanf("%d", &lista[i].idade);
	printf("Digite o peso da pessoa %d \n", i);
	scanf("%f", &lista[i].peso);
	printf("Digite o nome da pessoa %d .\n", i);
	scanf("%s", lista[i].nome);
    }

//Ordenando as pessoas por idade
    int trocou = 1;
    for (int k = j-1 ; k>0 && trocou; k--) {
	trocou = 0;
	for (int i = 0; i < k; i++) {
	    //se trocar o "<" por ">" vira ordem crescente
	    if (lista[i].idade < lista[i+1].idade) {
	    int aux = lista[i+1].idade;
	    lista[i+1].idade = lista[i].idade;
	    lista[i].idade = aux;
	    trocou = 1;
	    }
	}
    }

//imprime o vetor lista;

    for (int i = 0; i < j; i++) {
	printf("A idade de %d é %d\n", i, lista[i].idade);
    }
//Parte 2 da questão
    
    printf("Agora digite uma idade qualquer \n");
    int idadeU;
    scanf("%d", &idadeU);
    int resposta = busca(j, lista, idadeU);
    if (resposta == -1) {
	printf("Não há ninguém aqui com essa idade\n");
	return 0;
    }
    else puts(lista[resposta].nome);
    return 0;
    
}
