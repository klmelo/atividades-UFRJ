#include <stdio.h>
#include <math.h>

double raiz(double n, double x) {
    double proximo_x = x - ((pow(x,2)-n)/(2*x));
    if (fabs(proximo_x - x) < 1e-6) {
	return x;
    } else return raiz(n, proximo_x);
}
int main(void){
    double n;
    scanf("%lf", &n);
    double w = 10.0;
    printf("%lf\n", raiz(n, w));
    return 0;
}
