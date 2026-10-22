/*
    Escreva um programa em C que leie 5 números inteiros armazenando-os
    em um vetor.
    O programa deverá informar qual o maior e o menor número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXNUMEROS 5
int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int numeros[MAXNUMEROS], maiorNumero, menorNumero;

    for(int i = 0; i < MAXNUMEROS; i++) {
        printf("Informe o %d° número: ", i+1);
        scanf("%d", &numeros[i]);

        if(i == 0) {
            maiorNumero = numeros[i];
            menorNumero = numeros[i];
        } else {
            if(numeros[i] > maiorNumero) {
                maiorNumero = numeros[i];
            }

            if(numeros[i] < menorNumero) {
                menorNumero = numeros[i];
            }
        }
    }

    printf("O maior número é %d\nO menor número é %d\n", maiorNumero, menorNumero);

    return 0;
}