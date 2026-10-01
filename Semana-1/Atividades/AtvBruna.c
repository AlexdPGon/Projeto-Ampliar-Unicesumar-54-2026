#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int resultado;
    bool resultadoValor;

    resultado = 77 % 3;
    
    printf("Resultado: %d\n", resultado);

    resultadoValor = !((10 != 10) || (15 < 1)) ;

    printf("Resultado do valor: %d\n", resultadoValor);

    return 0;
}