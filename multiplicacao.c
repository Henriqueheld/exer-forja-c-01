// incluir a biblioteca stdio.h que permite usar entrada e saida de ingos.(printf e scanf)
# include<stdio.h>

//Incluá a biblioteca stdlib.h que permite funçõe utilitarias (systen())
# include<stdlib.h>


//declarar a função principal onde o programa começa sua execução
int main(){

    float numero1, numero2, respMult;

    printf("Digite o primeiro numero número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    respMult = numero1 / numero2;
    printf("A multiplicação dos numeros é: %.2f", respMult);

    //pausar o sistema ate que o usuario pressione qualquer tecla
    system("pause");

    // Finaliza o programa retornando 0, indicando que tudo ocorreu bem
    return 0;
}