/*
    Escreva um algotimo que aprsente o seguinte menu pro usuário:

    [1] Soma
    [2] Subtração
    [3] Divisão
    [4] Multiplicação
    [5] Sair

    - O programa deverá executar a operação entre 2 números reais que o usuário escolher e apresentar
    o resultado na tela
    - O programa só poderá ser finalizado quando o usuário escolher a opção de [5] Sair
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;
    float num1, num2, resultado;

    do {
        system("clear");
        printf(
            "[1] Soma\n"
            "[2] Subtração\n"
            "[3] Divisão\n"
            "[4] Multiplicação\n"
            "[5] Sair\n"
            "Escolha: "
        );
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4) {
            printf("Informe o primeiro número: ");
            scanf("%f", &num1);

            printf("Informe o segundo número: ");
            scanf("%f", &num2);
        }

        switch(opcao) {
            case 1:
                resultado = num1 + num2;
                printf("%.1f + %.1f = %.1f\n", num1, num2, resultado);
                system("pause");
            break;

            case 2:
                resultado = num1 - num2;
                printf("%.1f - %.1f = %.1f\n", num1, num2, resultado);
                system("pause");
            break;

            case 3:
                if(num2 == 0) {
                    printf("Não é possível divisão por ZERO\n");
                } else {
                    resultado = num1 / num2;
                    printf("%.1f / %.1f = %.1f\n", num1, num2, resultado);
                }
                system("pause");
            break;

            case 4:
                resultado = num1 * num2;
                printf("%.1f x %.1f = %.1f\n", num1, num2, resultado);
                system("pause");
            break;

            case 5:
                printf("Encerrando o sistema...");
            break;

            default:
                printf("Opção inválida!!\n");
                system("pause");
            break;
        }

    } while(opcao != 5);

    return 0;
}