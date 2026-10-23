/*
    Escreva um programa que receba 10 números inteiros
    e o liste na tela de traz pra frente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXNUMEROS 10

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int numeros[MAXNUMEROS];

    for(int i = 0; i < MAXNUMEROS; i++) {
        printf("Informe o %d° número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros invertidos\n");
    for(int i = 9; i>= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}