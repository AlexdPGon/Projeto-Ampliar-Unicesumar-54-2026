/*
    Escreva um algoritmo em C que exiba na tela todos os números í­mpares entre 53 e 98.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    for(int i = 53; i <= 98; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}