/*
    Escreva um algortimo em C que receba:

    Matrícula do Aluno:
    Idade do Aluno:
    Nome do Aluno:
    Endereço do Aluno:

    O programa deverá escrever na tela a ficha completa do aluno, incluindo nome, idade, matricula e endereço.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int matricula, idade;
    char nome[30], endereco[100];

    printf("Informe o NOME do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Informe a MATRÍCULA do aluno %s: ", nome);
    scanf("%d", &matricula);

    printf("Informe a IDADE aluno %s: ", nome);
    scanf("%d", &idade);
    getchar();

    printf("Informe o ENDEREÇO do aluno %s: ", nome);
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    printf(
        "Nome: %s\n"
        "Matrícula: %d\n"
        "Idade: %d\n"
        "Endereço: %s\n",
        nome,
        matricula,
        idade,
        endereco
    );
    
    return 0;
}