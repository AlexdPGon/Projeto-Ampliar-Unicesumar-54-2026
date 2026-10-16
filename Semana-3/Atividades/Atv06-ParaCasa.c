/*
    Escreva um código que exiba na tela um menu com as opções:

    1. Somar 2 numeros
    2. Multiplicar 2 numeros
    3. Encerrar

    O programa só poderá ser finalizado quando o usuário escolher a opção 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero1, numero2, opcao, resultado;
    
    do {
        system("clear");
        printf(
            "1. Somar 2 numeros\n"
            "2. Multiplicar 2 numeros\n"
            "3. Encerrar\n"
            "Escolha: "
        );
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 2) {
            printf("Infome o primeiro número: ");
            scanf("%d", &numero1);

            printf("Infome o segundo número: ");
            scanf("%d", &numero2);
        }

        switch(opcao) {
            case 1:
                resultado = numero1 + numero2;
                printf("Resultado é igual a %d\n", resultado);
                system("pause");
            break;

            case 2:
                resultado = numero1 * numero2;
                printf("Resultado é igual a %d\n", resultado);
                system("pause");
            break;

            case 3:
                printf("Muito obrigado por usar o nosso sistema!! :)\nEncerrando o sistema...");
            break;

            default:
                printf("Opção inválida!! Tente novamente...\n");
                system("pause");
            break;
        }


    } while(opcao != 3);

    return 0;
}