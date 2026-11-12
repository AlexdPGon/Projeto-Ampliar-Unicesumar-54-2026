  /*
    Escreva um programa em C, que receba o salario de uma pessoa e calcule um aumento de que a pessoa desejar.
    O calculo deverá ser feito em uma sub-rotina de FUNÇÃO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float aumento(float valorSalario, int percentual) {
    float aumento;
    aumento = valorSalario * ((float)percentual / 100);

    return valorSalario + aumento;

}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    float salario, novoSalario;
    int percentual;

    printf("Informe o seu salário: ");
    scanf("%f", &salario);

    printf("Quantos %% de aumento você quer: ");
    scanf("%d", &percentual);

    novoSalario = aumento(salario, percentual);

    printf("Novo salário: R$%.2f\n", novoSalario);

    return 0;
}