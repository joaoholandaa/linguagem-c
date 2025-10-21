#include <stdio.h>

int main(){
    
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int i, pot = 1;
    for(i=0; i<=n; i++){
        printf("2^%d = %d\n", i, pot);
        pot*=2;
    }

    return 0;
}