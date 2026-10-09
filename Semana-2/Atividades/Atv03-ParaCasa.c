/*
    Escreva um programa que apresente as quatro operações aritméticas pro usuário.
    Como uma calculadora. O usuário deverá escolher qual operação ele quer realizar
    e informar 2 números.

    1. Soma
    2. Subtração
    3. Divisão
    4. Multiplicação
*/

#include <stdio.h>

int main() {

    float numero1, numero2, resultado;
    int opcao; 

    printf(
        "1. Soma\n"
        "2. Subtração\n"
        "3. Divisão\n"
        "4. Multiplicação\n"
        "Escolha: "
    );
    scanf("%d", &opcao);

    if(opcao >= 1 && opcao <= 4) {
        printf("Informe o primeiro número: ");
        scanf("%f", &numero1);

        printf("Informe o segundo número: ");
        scanf("%f", &numero2);
    }

    switch(opcao) {

        case 1:
            resultado = numero1 + numero2;
            printf("O resultado é %.2f\n", resultado);
        break;

        case 2:
            resultado = numero1 - numero2;
            printf("O resultado é %.2f\n", resultado);
        break;

        case 3:
            if(numero2 == 0) {
                printf("Não existe divisão por ZERO\n");
            } else {
                resultado = numero1 / numero2;
                printf("O resultado é %.2f\n", resultado);
            }
        break;

        case 4:
            resultado = numero1 * numero2;
            printf("O resultado é %.2f\n", resultado);
        break;

        default:
            printf("Opção inválida!!");
        break;
    }

    return 0;
}