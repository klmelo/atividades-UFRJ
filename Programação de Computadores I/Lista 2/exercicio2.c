#include <stdio.h>
int main(){
    int n;
    printf("Dê-me o número de linhas que deseja \n");
    scanf("%d", &n);
    if(n < 0 || n > 10){
	printf("Valor inadequado. \n");
	return 1;
    } else
	for(int i = 1; i <= n; i++){
	    for (int j =i; j<=n; j++){
		printf(" ");
	    }
	    for(int j = 1; j < i; j++){
		printf("*");
	    }
	    for(int j = 1; j <= i; j++){
		printf("*");
	    }
	    printf("\n");
	}
}
