/*
    Escreva um programa que receba 6 notas (em um vetor)
    e calcule a média delas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXNOTAS 6

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    float notas[MAXNOTAS], media;

    for(int i = 0; i < MAXNOTAS; i++) {
        printf("Informe a %d° nota: ", i+1);
        scanf("%f", &notas[i]);

        if(i == 0) {
            media = notas[i];
        } else {
            media += notas[i]; // media = media + notas[i];
        }
    }

    media /= MAXNOTAS; // meidia = media / MAXNOTAS;

    printf("Média = %.2f\n", media);

    return 0;
}

