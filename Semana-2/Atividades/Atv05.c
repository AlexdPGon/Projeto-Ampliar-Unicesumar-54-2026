/*
    Escreva um algortimo em C que receba 3 números inteiros
    e informe qual deles é o maior.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    int num1, num2, num3;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    printf("Informe o terceiro número: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3) {
        printf("O número %d é o maior\n", num1);
    }

    else if(num2 > num1 && num2 > num3) {
        printf("O número %d é o maior\n", num2);
    }

    else if(num3 > num1 && num3 > num2) {
        printf("O número %d é o maior\n", num3);
    }
    
    else {
        printf("Todos os números são iguais!!\n");
    }

    return 0;
}