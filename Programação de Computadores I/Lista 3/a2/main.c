#include <stdio.h>
#include <string.h>
#define MAX 100

int main(void){
    char string[MAX];
    fgets(string, MAX, stdin);
    //essa linha dá problema se não tiver o -1 por alguma razão.
    int x = strlen(string) - 1;
    char rev[x];
    for(int i = 0; i <= x; i++) {
	rev[i] = string[x - i];
    }
    rev[x+1] = '\0';
    puts(rev);
    return 0;
}
