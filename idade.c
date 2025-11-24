// Incluir a biblioteca stdio.h, permite o uso de entrada e saida de valores como o print
#include <stdio.h>
// incluií a biblioteca stdlib.h, para funções utilitarias como o system
#include <stdlib.h>

int main() {

    int idade;

    printf("Qual a sua idade?: ");
    scanf("%d", &idade);
    printf("A idade informada foi: %d \n", idade);
 
    system("pause");
    return 0;
}