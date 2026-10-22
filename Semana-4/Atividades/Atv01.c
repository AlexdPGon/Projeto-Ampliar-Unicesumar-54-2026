/*
    Escreva um algoritmo que leia 5 números inteiro
    e depois escreva-os na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int numeros[5];

    for(int i = 0; i < 5; i++) {
        printf("Informe o %d° número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("valores na variável numeros = ");
    for(int i = 0; i <= 4; i++) {
        printf("%d, ", numeros[i]);
    }

    printf("\nNumero[1] = %d\n", numeros[1]);

    return 0;
}