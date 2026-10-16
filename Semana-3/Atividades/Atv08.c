/*
    Escreva um programa que receba 6 idades e informe quem é o mais novo e o mais velho.
    
    Necessário, ainda, informar se essas duas idades (menor e maior) são maior ou menor que 18 anos.
*/

#include <stdio.h>
//#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    // system("clear");

    int idade, maisNovo,maisVelho;

    for(int i = 1; i <= 6; i++) {
        printf("Informe a %d° idade: ", i);
        scanf("%d", &idade);

        if(i == 1) {
            maisNovo = idade;
            maisVelho = idade;
        } else {
            if(idade < maisNovo) {
                maisNovo = idade;
            }

            if(idade > maisVelho) {
                maisVelho = idade;
            }
        }
    }

    printf(
        "A idade mais nova é: %d\n"
        "A idade mais velha é: %d\n",
        maisNovo,
        maisVelho
    );

    if(maisNovo >= 18) {
        printf("A idade mais nova é MAIOR de 18 anos\n");
    } else {
        printf("A idade mais nova é MENOR de 18 anos\n");
    }

    if(maisVelho >= 18) {
        printf("A idade mais velho é MAIOR de 18 anos\n");
    } else {
        printf("A idade mais velho é MENOR de 18 anos\n");
    }

    return 0;
}