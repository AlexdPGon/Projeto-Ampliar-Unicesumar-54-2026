/*
    Escreva um algoritmo que calcule a idade de uma pessoa a partir de sua data de nascimento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularIdade(int anoNasc) {
    int idadeDaPessoa = 2026 - anoNasc;
    return idadeDaPessoa;
}

void calcularIdade2(int anoNasc) {
    int idadeDaPessoa = 2026 - anoNasc;
    printf("A idade dessa pessoa é %d\n", idadeDaPessoa);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int anoNascimento, idade;

    printf("Informe qual o ANO em que você nasceu: ");
    scanf("%d", &anoNascimento);

    idade = calcularIdade(anoNascimento);

    printf("A idade dessa pessoa é %d\n", idade);
    printf("A idade dessa pessoa é %d\n", calcularIdade(anoNascimento));

    calcularIdade2(anoNascimento);

    return 0;
}