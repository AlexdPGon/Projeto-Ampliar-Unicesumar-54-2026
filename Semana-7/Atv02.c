/*
    Crie um programa simulando uma academia, onde terá 3 opções.

    1 - Cadastrar Aluno na Academia
    2 - Ver Alunos Cadastrados
    3 - Sair

    Requisito:
    O programa poderá cadastrar no máximo 5 alunos na academia.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXALUNOS 5

typedef struct {
    char nome[30];
    int idade;
    float peso;
    float altura;
} TipoPessoa;

int menu() {
    int opc;

    printf(
        "1 - Cadastrar Aluno na Academia\n"
        "2 - Ver Alunos Cadastrados\n"
        "3 - Sair\n"
        "Escolha: "
    );
    scanf("%d", &opc);
    getchar();

    return opc;
}

TipoPessoa cadastrarAluno() {
    TipoPessoa pessoaCadastrada;

    printf("Informe o NOME do aluno: ");
    fgets(pessoaCadastrada.nome, sizeof(pessoaCadastrada.nome), stdin);
    pessoaCadastrada.nome[strcspn(pessoaCadastrada.nome, "\n")] = '\0';

    printf("Informe a IDADE de %s: ", pessoaCadastrada.nome);
    scanf("%d", &pessoaCadastrada.idade);

    printf("Informe a ALTURA de %s: ", pessoaCadastrada.nome);
    scanf("%f", &pessoaCadastrada.altura);

    printf("Informe a PESO de %s: ", pessoaCadastrada.nome);
    scanf("%f", &pessoaCadastrada.peso);

    return pessoaCadastrada;
}

void mostrarAlunosCadastrados(TipoPessoa vetor[], int cont) {
    printf("### ALUNOS CADASTRADOS ###\n");
    for(int i = 0; i < cont; i++) {
        printf(
            "Nome: %s\n"
            "Idade: %d\n"
            "Altura: %.2fcm\n"
            "Peso: %.2fKg\n\n",
            vetor[i].nome,
            vetor[i].idade,
            vetor[i].altura,
            vetor[i].peso
        );
    }
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    TipoPessoa alunos[MAXALUNOS];
    int opcao, contador = 0;

    do {
        system("clear");
        opcao = menu();

        switch (opcao) {
        case 1:
            if(contador == MAXALUNOS) {
                printf("Máximo de alunos cadastrado!!\n");
            } else {
                alunos[contador] = cadastrarAluno();
                contador++;
            }
            
            system("pause");
        break;

        case 2:
            if(contador == 0) {
                printf("Nenhum aluno cadastrado no sistema!!\n");
            } else {
                mostrarAlunosCadastrados(alunos, contador);
            }
            system("pause");
        break;

        case 3:
            printf("Encerrando sistema...\n");
        break;
        
        default:
            printf("Opção inválida!!\n");
            system("pause");
        break;
        }

        if(opcao == 3) {
            break;
        }
        
    } while(true);


    return 0;
}