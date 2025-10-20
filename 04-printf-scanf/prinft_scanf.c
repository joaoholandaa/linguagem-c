#include <stdio.h>

#define PI 3.1416

int main(){

    int x = 10;
    double y = 2.2;
    float raio;
    
    printf("%d %s %.1f = %.1f \n", x, "+", y, x+y);
    
    printf("Digite o valor do raio do circulo: \n");
    scanf("%f", &raio);

    float area = PI * (raio*raio);
    printf("Area do circulo: %f\n", area);

    return 0;
}