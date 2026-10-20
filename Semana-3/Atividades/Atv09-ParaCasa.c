/*
    Refatore o código anterior, para informar na saí­da o valor da segunda menor
    e segunda maior idade.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int idade, maisVelha, maisNova, segundaMaisVelha, segundaMaisNova;

    for (int i = 1; i <= 6; i++) {
        printf("Informe uma idade: ");
        scanf("%d", &idade);

        if (i == 1) {
            maisNova = idade;
            maisVelha = idade;
        }
        else {
            if (idade < maisNova) {
                segundaMaisNova = maisNova;
                maisNova = idade;
            }
            else if (i == 2 || idade < segundaMaisNova) {
                segundaMaisNova = idade;
            }

            if (idade > maisVelha) {
                segundaMaisVelha = maisVelha;
                maisVelha = idade;
            }
            else if (i == 2 || idade > segundaMaisVelha) {
                segundaMaisVelha = idade;
            }
        }
    }

    printf("A menor idade é: %d ", maisNova);
    if(maisNova >= 18) {
        printf("e é maior de 18 anos\n");
    } else {
        printf("e é menor de 18 anos\n");
    }

    printf("A SEGUNDA menor idade é: %d ", segundaMaisNova);
    if(segundaMaisNova >= 18) {
        printf("e é maior de 18 anos\n");
    } else {
        printf("e é menor de 18 anos\n");
    }

    printf("A maior idade é: %d ", maisVelha);
    if(maisVelha >= 18) {
        printf("e é maior de 18 anos\n");
    } else {
        printf("e é menor de 18 anos\n");
    }

    printf("A SEGUNDA maior idade é: %d ", segundaMaisVelha);
    if(segundaMaisVelha >= 18) {
        printf("e é maior de 18 anos\n");
    } else {
        printf("e é menor de 18 anos\n");
    }

    return 0;
}