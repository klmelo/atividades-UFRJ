#include <stdio.h>
int ehMultiplo(int r, int s);
void multiplos(int q, int x, int y);
int main(){
    int n, a, b;
    printf("Dê-me n, a e b. \n");
    scanf("%d %d %d", &n, &a, &b);
    multiplos(n, a, b);
    printf("\n");
    return 0;
}
int ehMultiplo(int x, int y){
    if (x%y==0) {
        return 1;
    }
    else return 0;
}
void multiplos(int n, int a, int b){
    int j = 0;
    int i = 0;
    while (j < n){
	if (ehMultiplo(i, a) || (ehMultiplo(i, b))) {
	    printf("%d ", i);
	    j += 1;
	}
	i += 1;
    }
}
