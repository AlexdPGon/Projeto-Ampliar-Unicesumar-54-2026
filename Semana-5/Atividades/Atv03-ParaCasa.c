/*
    Escreva um programa em C que receba o cadastro de 3 alunos contendo nome, idade e 2 notas de uma disciplina.
    O programa deverá calcular a média de cada aluno e escrever na tela informando se ele está aprovado ou reprovado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXNOTAS 2
#define MAXALUNOS 3

typedef struct {
    char nome[30];
    int idade;
    float notas[MAXNOTAS], media;
} Aluno;

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    Aluno alunos[MAXALUNOS];

    for(int i = 0; i < MAXALUNOS; i++) {
        printf("Informe o NOME do %d° aluno: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Informe a IDADE do aluno %s: ", alunos[i].nome);
        scanf("%d", &alunos[i].idade);
        
        for(int j = 0; j < MAXNOTAS; j++) {
            printf("Informe a %d° nota: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
            getchar();

            if(j == 0) {
                alunos[i].media = alunos[i].notas[j];
            } else {
                alunos[i].media += alunos[i].notas[j];
            }
        }
        
        alunos[i].media /= MAXNOTAS;
    }
    

    printf("\n### ALUNOS CADASTRADOS ###\n\n");
    for(int i = 0; i < MAXALUNOS; i++) {
        printf(
            "Nome: %s\n"
            "Idade: %d\n"
            "Média: %.2f\n",
            alunos[i].nome,
            alunos[i].idade,
            alunos[i].media
        );
        if(alunos[i].media >= 6) {
            printf("Status: Aprovado\n\n");
        } else {
            printf("Status: Reprovado\n\n");
        }
    }

    

    return 0;
}