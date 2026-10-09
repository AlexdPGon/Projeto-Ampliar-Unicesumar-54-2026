/*
    Escreva um programa que receba 2 números inteiros e multiplique-os.
    O programa deverá informar se o resultado da multiplicação é par ou ímpar.
*/

#include <stdio.h>

int main() {

    int numero1, numero2, resultadoMultiplicacao;

    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);

    printf("Informe o segundo número: ");
    scanf("%d", &numero2);

    resultadoMultiplicacao = numero1 * numero2;


    if(resultadoMultiplicacao % 2 == 0) {
        printf("O resultado da multiplicação é %d e é PAR\n", resultadoMultiplicacao);
    } else {
        printf("O resultado da multiplicação é %d e é ÍMPAR\n", resultadoMultiplicacao);
    }


    // Operador Ternário
    // resultadoMultiplicacao % 2 == 0 ? 
    // printf("O resultado da multiplicação é %d e é PAR\n", resultadoMultiplicacao) :
    // printf("O resultado da multiplicação é %d e é ÍMPAR\n", resultadoMultiplicacao);

    return 0;
}