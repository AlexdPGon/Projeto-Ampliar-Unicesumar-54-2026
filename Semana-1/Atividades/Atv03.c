#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main() {
    system("cls");

    int variavelNormal = 10;
    const int VARIAVELCONSTANTE = 33;

    printf(
        "Variável Normal: %d\n"
        "Variável Constante: %d\n",
        variavelNormal,
        VARIAVELCONSTANTE);

    variavelNormal = 57;

    printf("Variável Normal: %d\n", variavelNormal);

    printf("Valor de PI: %.2f", PI);

    return 0;
}