#include<stdio.h>
#include<stdlib.h>

int main() {
    
    //declarar uma string com tamanho máximo de 50 caracteres
    char nome[50];

    printf("Digite seu nome: ");
    //le o nome até 49 caracteres, incluindo espaços
    fgets(nome, 50, stdin);
    printf("O nome digitado foi: %s \n", nome);

    system("pause");
    return 0;
}