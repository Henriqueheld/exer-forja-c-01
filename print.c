// Incluir a biblioteca stdio.h, permite o uso de entrada e saida de valores como o print
#include <stdio.h>
// incluií a biblioteca stdlib.h, para funções utilitarias como o system
#include <stdlib.h>


//Inicio da função, onde o programa começa a ser executado
int main() {

    float num1, num2 = 100.45;
    //int num2 = 200;

    // printar os numeros das variaveis
    printf("%f %d", num1, num2);

    //Finaliza o programa retornando 0, indicando sucesso
    system("pause");

        //Finaliza o programa retornando 0, indicando sucesso
    return 0;
}