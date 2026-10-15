#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    printf("\nIMPRIME O NÚMERO 100 E QUANDO VERIFICA NO FINAL, DÁ FALSO E NÃO REPETE DE NOVO\n");

    int i = 100;

    do{
        printf("i = %d\n", i);
        i++;
    } while(i < 30);

    // --------------------------------------------------------

    printf("\nIMPRIME NÚMEROS DE -5 ATÉ 29\n");

    i = -5;

    do{
        printf("i = %d\n", i);
        i++;
    } while(i < 30);

    // --------------------------------------------------------

    // Neste código imprimiria o -10 inicialmente, incrementaria e ao verificar no final sempre continua sendo verdadeiro/true(-10 é diferente de ZERO, logo ele é verdadeiro), então ele ficaria incrementando infinitamente.

    // i = -10;

    // do{
    //     printf("i = %d\n", i);
    //     i++;
    // } while(-10);

    // --------------------------------------------------------

    printf("\nIMPRIME O -10, INCREMENTA, AO VERIFICAR NO FINAL É FALSO PORQUE É ZEROE E NÃO REPETE\n");

    i = -10;

    do{
        printf("i = %d\n", i);
        i++;
    } while(0);

    printf("terminou");

    return 0;
}