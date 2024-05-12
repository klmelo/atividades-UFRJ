#include <stdio.h>
void arvore(int linhas, int invertida);
int main(){
    int linhas, invertida;
    printf("Dê o número de linhas  e o parâmetro de inversão. \n");
    scanf("%d %d", &linhas, &invertida);
    if(linhas >10 || linhas < 0) {
	printf("Esses parâmetros são inválidos. \n");
        return 1;
    } else
    arvore(linhas, invertida);
    return 0;
}

void arvore(int linhas, int invertida) {
    if(invertida < 0 ) {
	for (int i = linhas; i > 0; i--){
	    for (int a = i; a < linhas; a++){
		printf(" ");
	    }
	    for (int c = 0; c < (2*(i-1))+1; c++){
		printf("*");
	    }
	    printf("\n");
	}
    }
    else
	for (int i = 0; i < linhas; i++){
	    for (int a = i; a < linhas; a++){
		printf(" ");
	    }
	    for (int c = 0; c < (2*i)+1; c++) {
		printf("*");
	    }
	    printf("\n");
	}
    printf("\n");
}
