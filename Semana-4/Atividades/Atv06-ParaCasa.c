/*
    Escreva um algoritmo que leia uma idade e um nome e escreva-o na tela.
    
    #include <string.h>

    fgets(variável, sizeof(variável), stdin);
    variável[ strcspn(variável, "\n") ] = '\0';
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int idade;
    char nome[30];

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf(
        "Idade: %d\n"
        "Nome: %s\n",
        idade,
        nome
    );

    return 0;
}