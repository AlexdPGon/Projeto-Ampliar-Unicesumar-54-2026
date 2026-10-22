/*
    Escreva um programa que armazene 5 idades em um vetor.
    Como saída, deverá informar quem é a pessoal mais velha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXIDADES 5

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int idades[MAXIDADES], maisVelha;

    for(int i = 0; i < MAXIDADES; i++) {
        printf("Informe a %d° idade: ", i+1);
        scanf("%d", &idades[i]);

        if(i == 0) {
            maisVelha = idades[i];
        } else {
            if(idades[i] > maisVelha) {
                maisVelha = idades[i];
            }
        }
    }

    printf("A idade mais velha é %d\n", maisVelha);

    return 0;
}