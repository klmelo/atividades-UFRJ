#include <stdio.h>
#include <math.h>
double raiz(double n);
int main(){
    double n;
    printf("Diga-me o número n \n");
    scanf("%lf", &n);
    printf("O número lido foi %lf, a raiz calculada com sqrt da math.h é %lf e a raiz calculada pela minha função é %lf. \n", n, sqrt(n), raiz(n));
    return 0;
}
double raiz(double n){
    double x0 = 10;
    double x_antigo;
    do {
	x_antigo = x0;
	x0 = x0 - (pow(x0, 2)-n)/(2*x0);
    }
    while(fabs(x0 - x_antigo) >= 1e-6);
    return x0;
}
