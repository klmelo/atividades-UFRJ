#include<stdio.h>
typedef struct cont {
    int a, e , i, o, u;
} Contador;

int main(void){
    Contador contagem;
    contagem.a = 0;
    contagem.e = 0;
    contagem.i = 0;
    contagem.o = 0;
    contagem.u = 0;

    char c;

    FILE *arquivo = fopen("texto.txt", "r");
    if (arquivo == NULL) {
        printf("\nArquivo invalido ou inexistente\n");
        return 1;
    }
    while((c = fgetc(arquivo)) != EOF) {
        if (c == 'a' || c == 'A')
            contagem.a += 1;
        if (c == 'e' || c == 'E')
            contagem.e += 1;
        if (c == 'i' || c == 'I')
            contagem.i += 1;
        if (c == 'o' || c == 'O')
            contagem.o += 1;
        if (c == 'u' || c == 'U')
            contagem.u += 1;
    }

    fclose(arquivo);

    printf("\n a %d", contagem.a);
    printf("\n e %d", contagem.e);
    printf("\n i %d", contagem.i);
    printf("\n o %d", contagem.o);
    printf("\n u %d\n", contagem.u);

    return 0;
}