#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void modificarValorProcedimento(int num) {
    num = 100;
    printf("Valor modificado: %d\n", num);
}

int modificarValorFuncao(int num) {
    num = 250;
    return num;
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero); // 5

    // modificarValorProcedimento(numero);

    numero = modificarValorFuncao(numero);

    printf("Valor do número: %d\n", numero);

    return 0;
}