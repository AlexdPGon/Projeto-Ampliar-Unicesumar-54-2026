/*
    Escreva um programa que receba uma frase e a escreva de trás pra frente.

    Exemplo:

    Frase: OLÁ PESSOAL DO AMPLIAR!
    Resultado: !RAILPMA OD LAOSSEP ÁLO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    char frase[100];

    printf("Informe uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    for(int i = strlen(frase) - 1; i >= 0; i--) {
        printf("%c", frase[i]);
    }

    return 0;
}