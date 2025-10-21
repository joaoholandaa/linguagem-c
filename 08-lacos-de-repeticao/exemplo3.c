#include <stdio.h>

int main(){

    int n;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int i = 1, fat = 1;

    while(i <= n) {
        fat *= i;
        i++;
    }

    printf("Fatorial de %d e: %d\n", n, fat);

    return 0;
}