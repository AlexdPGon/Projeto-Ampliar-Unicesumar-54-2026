  /*
    Escreva um programa em C, que receba o salario de uma pessoa e calcule um aumento de 10%.
    O calculo deverá ser feito em uma sub-rotina de PROCEDIMENTO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aumentoSalario(float valorInformado) {
    float aumento, novoSalario;
    aumento = valorInformado * 0.10;
    novoSalario = valorInformado + aumento;

    printf("O novo salário é %.2f\n", novoSalario);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    //system("clear");

    float salario;

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    aumentoSalario(salario);

    return 0;
}