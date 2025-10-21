#include <stdio.h>

int main(){

    int i = 0;
    do{
        printf("%d * 7 = %d\n", i, i*7);
        i++;
    } while (i <= 10);

    return 0;
}