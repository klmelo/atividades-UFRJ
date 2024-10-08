#include <stdio.h>
#include <string.h>
#define MAX 150

typedef struct {
    char nome[MAX];
    float p1, p2, t, media;
}Aluno;

int main(void) {
    char entrada[MAX];
    char saida[MAX];

    char linha[MAX];
    Aluno alunos[MAX];

    printf("Digite o nome do arquivo\n");
    fgets(entrada, MAX, stdin);
    entrada[strcspn(entrada, "\n")] = '\0'; 

    FILE* arquivoentrada = fopen(entrada, "r");

    if (arquivoentrada == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    int i = 0;

    while (fgets(linha, sizeof(linha), arquivoentrada) != NULL) {
        sscanf(linha, "Nome: %s P1: %f P2: %f Trabalho: %f\n", alunos[i].nome, &alunos[i].p1, &alunos[i].p2, &alunos[i].t);
        i++;
    }
    for (int j = 0; j<i; j++) {
        alunos[j].media = (((alunos[j].p1 + alunos[j].p2)/2)*0.8) + (alunos[j].t*0.2);
    }

    printf("digite o nome do arquivo de saida\n");
    fgets(saida, MAX, stdin);
    saida[strcspn(saida, "\n")] = '\0'; 

    FILE* arquivosaida = fopen(saida, "w");

    if (arquivosaida == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    for (int k = 0; k<i; k++) {
        fprintf(arquivosaida, "%s %f\n", alunos[k].nome, alunos[k].media);
    }
    fclose(arquivoentrada);
    fclose(arquivosaida);
    return 0;
}