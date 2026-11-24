/*
    Escreva um programa que receba um número.
    Este programa deverá exibir na tela a tabuada de multiplicação deste número.
    Crie uma subrotina para realizar os calculos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int multiplicacao(int a, int b) {
    return a * b;
}

void exibirTabuada(int numero) {
    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, multiplicacao(numero, i));
    }
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    printf("\n### TABUADA DE %d ###\n", numero);
    exibirTabuada(numero);

    return 0;
}