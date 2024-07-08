#include <stdio.h>
#include <stdlib.h>
/* Hn = 1/1 + 1/2 + 1/3 + ... + 1/n */

/* Versão com FOR

  double harmonico(int n) {
    double x=0;
    for(int i = n; i>0; i--) {
	x += 1.0/i;
    } return x;
    
    } */

//Versão recursiva

double harmonico(int n) {
    if (n==1) {
	return 1.0;
    }
    else return 1.0/n + 1.0/harmonico(n-1);
}

int main(void) {
    int w;
    scanf("%d", &w);
    printf("%lf\n", harmonico(w));
    return 0;
}
