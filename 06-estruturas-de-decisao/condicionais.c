#include <stdio.h>

int main(){

    int x;
    printf("Digite um numero: \n");
    scanf("%d", &x);
    
    if(x==0){
        printf("O valor e zero.\n");
    } else if ((x%2) == 0){
            printf("O valor e par.\n");
    } else {
            printf("O valor e impar.\n");
    }
}