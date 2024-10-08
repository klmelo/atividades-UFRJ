#include<stdio.h>
typedef struct {
    char nome[100];
    double nota[3];
    double media;
} Taluno;

int main(void) {
    Taluno alunos[50];
    FILE* arquivo = fopen("alunos.dat", "a+");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fseek(arquivo, 0, SEEK_END);
    long tamanho = ftell(arquivo);
    fseek(arquivo, 0, SEEK_SET);
    int n = tamanho/sizeof(Taluno);

    for(int i = 0; i<n; i++) {
        fread(&alunos[i], sizeof(Taluno), 1, arquivo);
    }

    int percentual = 0;

    for(int j = 0; j < n; j++) {
        if(alunos[j].media == alunos[j].nota[0]*0.25 + alunos[j].nota[1]*0.35 + alunos[j].nota[2]*0.4 ) {
            percentual++;
        }
        alunos[j].media = alunos[j].nota[0]*0.25 + alunos[j].nota[1]*0.35 + alunos[j].nota[2]*0.4;

    }
    for(int k = 0; k < n; k++) {
        fwrite(&alunos[k], sizeof(Taluno), 1, arquivo);
    }

    printf("\n%d notas foram alteradas entre %d\n", percentual, n);

    for(int l = 0; l<n; l++) {
        printf("\n%s p1: %lf p2: %lf p3: %lf media: %lf\n", alunos[l].nome, alunos[l].nota[0], alunos[l].nota[1], alunos[l].nota[2], alunos[l].media);

    }
    printf("\n");
    fclose(arquivo);
    return 0;


}