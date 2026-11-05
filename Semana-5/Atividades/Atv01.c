/*
    Crie uma struct para cadastrar 2 pessoas e no final diga qual é a mais velha
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
    char nome[30];
    int idade;
} TipoPessoa;


int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    TipoPessoa pessoa1, pessoa2;
    TipoPessoa pessoas[2];

    printf("Informe o nome da primeira pessoa: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] =  '\0';

    printf("Informe a idade da primeira pessoa: ");
    scanf("%d", &pessoa1.idade);
    getchar();

    // ---------------------------------------------------------

    printf("Informe o nome da segunda pessoa: ");
    fgets(pessoa2.nome, sizeof(pessoa2.nome), stdin);
    pessoa2.nome[strcspn(pessoa2.nome, "\n")] =  '\0';

    printf("Informe a idade da segunda pessoa: ");
    scanf("%d", &pessoa2.idade);
    getchar();

    if(pessoa1.idade > pessoa2.idade) {
        printf("A primeira pessoa com nome de %s é mais velha possuindo %d anos\n", pessoa1.nome, pessoa1.idade);
    } else if(pessoa2.idade > pessoa1.idade) {
        printf("A segunda pessoa com nome de %s é mais velha possuindo %d anos\n", pessoa2.nome, pessoa2.idade);
    } else {
        printf("As duas pessoas tem a mesma idade\n");
    }

    // --------------------------------------------------------

    printf("Informe o nome da primeira pessoa: ");
    fgets(pessoas[0].nome, sizeof(pessoas[0].nome), stdin);
    pessoas[0].nome[strcspn(pessoas[0].nome, "\n")] =  '\0';

    printf("Informe a idade da primeira pessoa: ");
    scanf("%d", &pessoas[0].idade);
    getchar();

    printf("Informe o nome da primeira pessoa: ");
    fgets(pessoas[1].nome, sizeof(pessoas[1].nome), stdin);
    pessoas[1].nome[strcspn(pessoas[1].nome, "\n")] =  '\0';

    printf("Informe a idade da primeira pessoa: ");
    scanf("%d", &pessoas[1].idade);
    getchar();


    return 0;
}