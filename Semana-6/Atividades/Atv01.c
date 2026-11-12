#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Procedimento porque o retorno é void (vazio)
void saudar() {
    printf("Olá Aluno!!\n");
}

// Função
int somar(int papagaio, int piriquito) {
    return papagaio + piriquito;
}

void somar2(int num1, int num2) {
    int resultado = num1 + num2;
    printf("Resultado = %d\n", resultado);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    saudar();

    int resultado;

    int num1 = 5, num2 = 3;

    resultado = somar(num1, num2);

    somar2(1, 2);

    printf("Resultado = %d\n", resultado);
    printf("Resultado = %d\n", somar(10, 5));

    return 0;
}