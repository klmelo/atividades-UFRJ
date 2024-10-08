#include<stdio.h>
typedef struct {
    char nome[100];
    double nota[3];
    double media;
} Taluno;

int main(void) {
    Taluno alunos[50];
    int n;
    FILE* arquivo = fopen("alunos.dat", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    printf("Qual o numero de alunos?\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Qual eh o nome e as notas do aluno %d?\n", i);
        scanf("%s %lf %lf %lf", alunos[i].nome, &alunos[i].nota[0], &alunos[i].nota[1], &alunos[i].nota[2]);
        alunos[i].media = (alunos[i].nota[0] + alunos[i].nota[1] + alunos[i].nota[2])/3;
        fwrite(&alunos[i], sizeof(Taluno), 1, arquivo);
    }
    fclose(arquivo);
    return 0;
}
