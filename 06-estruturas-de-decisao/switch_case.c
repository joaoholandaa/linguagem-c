#include <stdio.h>

int main(){

    int a;
    printf("Escolha uma matricula: \n 1-Aluno(a)\n 2-Aluno(a)\n ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("Maria\n");
            break;
        case 2:
            printf("Larissa\n");
            break;
        default:
            printf("O aluno nao esta matriculado!\n");
    }
    return 0;
}