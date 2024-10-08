#include <stdio.h>
#include <stdlib.h>

size_t grava (FILE* pFile, int N) {
    size_t contador = 0;
    for (int i = 0; i < N; i++) {
        fwrite(&i, sizeof(int), 1, pFile);
        contador++;
    }
    return contador;
}

void* recupera(FILE* pFile) {
//Para achar o tamanho do arquivo:

fseek(pFile, 0, SEEK_END);

long tamanho = ftell(pFile);

//Quantos inteiros cabem

size_t numElementos = tamanho / sizeof(int);

//Alocando memória para os números

int *dados = (int*)malloc(tamanho);
return dados;

}

void exibe_vetor(int* vetor, int N) {
    for (int i = 0; i < N; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int modifica(FILE* pFile, int M) {
    fseek(pFile, -M*sizeof(int), SEEK_END);
    int modificados = 0;
    for (int i = 0; i < M; i++) {
        int numero;
        size_t lidos = fread(&numero, sizeof(int), 1 , pFile);

        if (numero % 2 == 0) {
            fseek(pFile, -sizeof(int), SEEK_CUR);
            int dobro = 2*numero;
            fwrite(&dobro, sizeof(int), 1, pFile);
            modificados++;
        } else fseek(pFile, sizeof(int), SEEK_CUR); //se não tiver essa linha, o programa vai ficar lendo o mesmo inteiro infinitamente
        return modificados;
    }



    /*while(pFile != EOF) {
        if(fread(pFile[ftell(pFile)], sizeof(int), 1, pFile)%2 == 0) {
        fwrite(2*pFile[ftell(pFile)], sizeof(int), 1, pFile);
        }
    }
    }*/

}

void recupera_exibe(FILE* pFile) {
     fseek(pFile, 0, SEEK_END); // Mover para o final do arquivo
    long tamanho = ftell(pFile); // Obter o tamanho do arquivo
    fseek(pFile, 0, SEEK_SET); // Voltar para o início do arquivo

    size_t numElementos = tamanho / sizeof(int); // Calcular o número de inteiros

    int* dados = (int*)malloc(numElementos * sizeof(int)); // Alocar memória
    if (dados == NULL) {
        perror("Erro ao alocar memória");
        return;
    }

    // Ler os dados do arquivo
    size_t lidos = fread(dados, sizeof(int), numElementos, pFile);
    if (lidos != numElementos) {
        perror("Erro ao ler os dados do arquivo");
        free(dados);
        return;
    }

    // Exibir os dados
    for (size_t i = 0; i < lidos; i++) {
        printf("%d ", dados[i]);
    }
    printf("\n");

    free(dados); // Liberar a memória alocada
}


int main()
{
    FILE *pFile;
    int i, N, M, num, mod, *vetor;
    char nome_arquivo[100];
    printf("Informe o nome do arquivo a ser criado: ");
    gets(nome_arquivo);
    printf("Informe um numero positivo: ");
    scanf("%d", &N);
    pFile = fopen(nome_arquivo, "wb+");
    if (!pFile)
    {
        printf("Erro na criacao do arquivo...");
        return -1;
    }
    if (grava(pFile, N) != N)
    {
        printf("Erro na gravacao do arquivo...");
        return -1;
    }
    vetor = recupera(pFile);
    if (vetor == NULL)
    {
        printf("Erro na recuperacao de dados do arquivo...");
        return -1;
    }
    exibe_vetor(vetor, N);
printf("Informe um numero positivo M correspondente a quantidade de valores a partir do final do arquivo que deseja alterar: ");
scanf("%d",&M);
mod=modifica(pFile,M);
if(mod==-1){
        printf("Valor de M fora do intervalo permitido...");
        return -1;
}
if(mod!=M){
        printf("Erro de leitura e/ou gravacao no arquivo...");
        return -1;
}
recupera_exibe(pFile);
fclose (pFile);
return 0;
}