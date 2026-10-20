/*
    Escreva um programa que leia 4 idades e informe qual a mais velha e qual a mais nova.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int idade1, idade2, idade3, idade4, maisVelho, maisNovo;

    printf("Informe a primeira idade: ");
    scanf("%d", &idade1);

    printf("Informe a segunda idade: ");
    scanf("%d", &idade2);

    printf("Informe a terceira idade: ");
    scanf("%d", &idade3);

    printf("Informe a quarta idade: ");
    scanf("%d", &idade4);

    maisNovo = idade1;
    maisVelho = idade1;

    if(idade2 > maisVelho) {maisVelho = idade2;}
    if(idade2 < maisNovo) {maisNovo = idade2;}

    if(idade3 > maisVelho) {maisVelho = idade3;}
    if(idade3 < maisNovo) {maisNovo = idade3;}

    if(idade4 > maisVelho) {maisVelho = idade4;}
    if(idade4 < maisNovo) {maisNovo = idade4;}

    printf("A idade mais nova é %d e a idade mais velha é %d", maisNovo, maisVelho);

    return 0;
}