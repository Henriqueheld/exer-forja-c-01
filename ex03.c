#include<stdio.h>
#include<stdlib.h>

int main() {
    float lado1, lado2, area;

    printf("Digite o comprimento do lado 1 do quadrado: ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do lado 2 do quadrado: ");
    scanf("%f", &lado2);

    area = lado1 * lado2;
    printf("A área do quadrado é: %.2f\n", area);
    
    
    return 0;
}