#include<stdio.h>
#include<stdlib.h>

int main() {
    
    char estado[50];
    int ano_nascimento, ano_atual;
 
    printf("Digite seu estado: ");
    fgets(estado, 50, stdin);

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    int idade = ano_atual - ano_nascimento;
    printf("Você nasceu em %d no estado de %s e tem %d anos.\n", ano_nascimento, estado, idade);
    
    return 0;
}