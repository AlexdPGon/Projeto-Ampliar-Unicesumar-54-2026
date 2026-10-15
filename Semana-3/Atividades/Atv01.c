#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    // i++ é a mesma coisa do que i = i + 1

    // Este código abaixo imprime de 0 até 10
    printf("NÚMEROS DE 0 ATÉ 10\n");

    for(int i = 0; i <= 10; i++ /*i = i + 1*/ ) {
        printf("Valor do i: %d\n", i);
    }

    // --------------------------------------------------------


    // Este código abaixo imprime os números PARES de 0 até 10
    printf("\nNÚMEROS PARES DE 0 ATÉ 10\n");

    for(int i = 0; i <= 10; i++) {
        if(i % 2 == 0) {
            printf("i = %d\n", i);
        }
    }

    // --------------------------------------------------------


    // Este código abaixo imprime os números ÍMPARES de 0 até 10
    printf("\nNÚMEROS ÍMPARES DE 0 ATÉ 10\n");

    for(int i = 0; i <= 10; i++) {
        if(i % 2 != 0) {
            printf("i = %d\n", i);
        }
    }

    return 0;
}