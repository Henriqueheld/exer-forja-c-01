#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int age1 = 0, age2 = 0;

    printf("INFORME A PRIMEIRA IDADE: ");
    if (scanf("%d", &age1) != 1) {
        fprintf(stderr, "Entrada inválida.\n");
        return 1;
    }

    printf("INFORME A SEGUNDA IDADE: ");
    if (scanf("%d", &age2) != 1) {
        fprintf(stderr, "Entrada inválida.\n");
        return 1;
    }

    printf("\n");

    if (age1 > age2) {
        printf("A MAIOR IDADE É %d.\n", age1);
    } else if (age1 == age2) {
        printf("AS IDADES SÃO IGUAIS.\n");
    } else {
        printf("A MAIOR IDADE É %d.\n", age2);
    }

    system("pause");
    return 0;
}
