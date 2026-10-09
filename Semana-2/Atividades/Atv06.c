/*
    Escreva um algoritmo em C que receba o salário de um funcionário e o cargo de seu código.
    De acordo com seu código, informe quanto de aumento ele teve e o valor atual de seu salário.
    A tabela a seguir apresenta os cargos e seus respectivos aumentos:

    Códigos        |         Cargo           |      Aumento
    1                   Desenvolvedor Java           30%
    2                   Analista de Redes            25%
    3                   Arquiteto DevOps             50%
    4                   Técnico de Suporte           13%

    A saída deverá ser:
    Salário atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salário:  R$xxxxx,xx

    Desafio (opcional):
    Que tal se arriscar um pouco mais em um conceito que não trabalhamos ainda? Como entrada, receba também o nome do funcionário e escrevê-lo na saída?

    Se for se aventurar, a saída deverá ser assim:

    Nome do Funcionário: xxxxxxxxxxx
    Salário atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salário:  R$xxxxx,xx

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");

    float salario, novoSalario, aumento;
    int codigo, porcentagem;
    char nome[20];

    printf("Informe o nome do funcionário: ");
    scanf("%s", nome);

    printf(
        "1 - Desenvolvedor Java\n"
        "2 - Analista de Redes\n"
        "3 - Arquiteto DevOps\n"
        "4 - Técnico de Suporte\n"
        "Escolha: "
    );

    scanf("%d", &codigo);

    printf("Informe o salário do funcionário: ");
    scanf("%f", &salario);

    switch(codigo) {
        case 1:
            porcentagem = 30;
            aumento = salario * (porcentagem/100.0);
            novoSalario = salario + aumento;
        break;

        case 2:
            porcentagem = 25;
            aumento = salario * ((float)porcentagem/100);
            novoSalario = salario + aumento;
        break;

        case 3:
            porcentagem = 50;
            aumento = salario * ((float)porcentagem/100);
            novoSalario = salario + aumento;
        break;

        case 4:
            porcentagem = 13;
            aumento = salario * ((float)porcentagem/100);
            novoSalario = salario + aumento;
        break;

        default:
            printf("Opção inválida!!");
        break;
    }

    printf(
        "Nome do Funcionário: %s\n"
        "Salário Antigo: R$%.2f\n"
        "Porcentagem de Aumento: %d%%\n"
        "Aumento: R$%.2f\n"
        "Salário Novo: R$%.2f\n",
        nome,
        salario,
        porcentagem,
        aumento,
        novoSalario
    );

    return 0;
}