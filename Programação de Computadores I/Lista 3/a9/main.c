/*
Autor: K. L. Melo;
Data: 07/07/2024;
Descrição: O programa retorna o determinante de uma matriz 3x3;
Entrada: Uma matriz 3x3;
Saída: O determinante dessa matriz;
Defesa: N/A
*/

#include <stdio.h>
int main(void){
    float matriz[3][3];
    for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
	    printf("Digite o termo %d, %d da matriz\n", i+1, j+1);
	    scanf("%f", &matriz[i][j]);
	}
    } printf("O determinante é %f\n", (matriz[0][0]*matriz[1][1]*matriz[2][2] + matriz[0][1]*matriz[1][2]*matriz[2][0] + matriz[0][2]*matriz[1][0]*matriz[2][1])-(matriz[0][0]*matriz[1][2]*matriz[2][1]+matriz[0][1]*matriz[1][0]*matriz[2][2]+matriz[0][2]*matriz[1][1]*matriz[2][0]));
    return 0;
    
}
