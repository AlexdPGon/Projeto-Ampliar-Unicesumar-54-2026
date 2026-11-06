/*
    Escreva um programa que leia o nome de um aluno, a idade e 4 notas deste aluno.
    O programa deverá retornar a média dessas notas, o nome e idade do aluno.
    Crie uma struct Aluno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXNOTAS 4

typedef struct {
    char nome[30];
    int idade;
    float notas[MAXNOTAS], media;
} Aluno;

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    Aluno aluno1;

    printf("Informe o NOME do aluno: ");
    fgets(aluno1.nome, sizeof(aluno1.nome), stdin);
    aluno1.nome[strcspn(aluno1.nome, "\n")] = '\0';

    printf("Informe a IDADE do aluno %s: ", aluno1.nome);
    scanf("%d", &aluno1.idade);

    for(int i = 0; i < MAXNOTAS; i++) {
        printf("Informe a %d° nota: ", i + 1);
        scanf("%f", &aluno1.notas[i]);

        if(i == 0) {
            aluno1.media = aluno1.notas[i];
        } else {
            aluno1.media += aluno1.notas[i];
        }
    }

    aluno1.media /= MAXNOTAS;

    printf(
        "### ALUNO CADASTRADO ###\n"
        "Nome: %s\n"
        "Idade: %d\n"
        "Nota 1: %.2f\n"
        "Nota 2: %.2f\n"
        "Nota 3: %.2f\n"
        "Nota 4: %.2f\n"
        "Média: %.2f\n",
        aluno1.nome,
        aluno1.idade,
        aluno1.notas[0],
        aluno1.notas[1],
        aluno1.notas[2],
        aluno1.notas[3],
        aluno1.media
    );

    return 0;
}