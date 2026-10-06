/*
    Faça um programa que receba duas idades e verifique qual é a maior.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // system("cls");
    int idade1 = 0, idade2 = 0;

    printf("Digite a primeira idade: ");
    scanf("%d", &idade1);

    printf("Digite a segunda idade: ");
    scanf("%d", &idade2);

    // operador ternário
    // idade1 > idade2 ?
    // printf("A primeira é maior de idade com %d anos", idade1) :
    // printf("A segunda é maior de idade com %d anos", idade2);

    if(idade1 > idade2) {
        printf("A primeira idade digitada é a mais velha e tem %d anos", idade1);
    } else if (idade2 > idade1) {
        printf("A segunda idade digitada é a mais velha e tem %d anos", idade2);
    } else {
        printf("As idades são iguais");
    }

    return 0;
}