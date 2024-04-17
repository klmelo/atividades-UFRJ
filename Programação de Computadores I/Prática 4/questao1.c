#include<stdio.h>

int main() {

        int x, y;
        int i = 1;
        int xx;
        printf("Digite dois inteiros x, y \n");
        scanf("%d %d", &x, &y);
        xx = x;

        do {
                x *= xx;
                i += 1;
        }

        while ( i != y );

        printf("%d \n", x);
return 0;

}
