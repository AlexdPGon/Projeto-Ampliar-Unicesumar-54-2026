#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    // Este código abaixo imprime de 0 até 20
    printf("NÚMEROS DE 0 ATÉ 20\n");

    int i = 0;

    while(i <= 20) {
        printf("i = %d\n", i);
        i++;
    }

    // --------------------------------------------------------

    printf("\nNÃO EXECUTA PORQUE 30 NÃO É MENOR E NEM IGUAL A 20\n");

    i = 30;

    while(i <= 20) {
        printf("i = %d\n", i);
        i++;
    }

    // --------------------------------------------------------

    printf("\nFica em LOOP até que atenda a condição do IF e usa o break para encerrar o LOOP\n");

    while(1) {
        printf("i = %d\n", i);
        i++;

        if(i == 200) {
            break;
        }
    }

    printf("Terminou");

    return 0;
}