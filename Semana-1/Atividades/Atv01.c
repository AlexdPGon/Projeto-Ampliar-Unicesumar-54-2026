#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    int numero1, numero2, resultado;

    bool valor = true; // false

    const int numeroQueNaoMuda = 100;

    printf("Número que não muda: %d\n", numeroQueNaoMuda);

    // numeroQueNaoMuda = 70;

    printf("Informe o primeiro número: ");
    scanf("%d", &numero1); // 10

    printf("Informe o segundo número: ");
    scanf("%d", &numero2); // 3

    resultado = numero1 + numero2; // 13

    printf("%d + %d = %d\n", numero1, numero2, resultado);

    numero1 = 30;
    numero2 = 50;

    resultado = numero1 + numero2; // 80

    printf("%d + %d = %d\n", numero1, numero2, resultado);

    return 0;
}