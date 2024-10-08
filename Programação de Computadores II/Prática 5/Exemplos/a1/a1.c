#include <stdio.h>
#define MAX 150

typedef struct {
    char nome[MAX];
    float p1, p2, t;
}Aluno;

int main(void) {
    int n;
    printf("Digite o numero de alunos na turma\n");
    scanf("%d", &n);

    Aluno alunos[MAX];

    for (int i = 0; i<n; i++) {
        printf("Digite o nome, as notas p1, p2 e trabalho do aluno %d\n", i);
        scanf("%s %f %f %f", alunos[i].nome, &alunos[i].p1, &alunos[i].p2, &alunos[i].t);
    }
    
    getchar();

    printf("Qual deve ser o nome do arquivo de saída?\n");
    char saida[MAX];
    fgets(saida, MAX, stdin);

    FILE* arquivo = fopen(saida, "w");

    for (int j = 0; j < n; j++) {
    fprintf(arquivo, "Nome: %s; P1: %f; P2: %f; Trabalho: %f\n", alunos[j].nome, alunos[j].p1, alunos[j].p2, alunos[j].t );
    }
    fclose(arquivo);
    return 0;
}