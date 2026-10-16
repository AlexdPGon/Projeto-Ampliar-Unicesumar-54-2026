/*
    Escreva um programa que exiba na tela a contagem regressiva de 30 até 0.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    for(int i = 30; i >= 0; i = i - 1 /*i-- | i -= 1 | i = i - 1*/) {
        printf("%d\n", i);
    }

    return 0;
}