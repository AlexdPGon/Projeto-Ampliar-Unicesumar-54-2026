/*
    Escreva uma calculadora em C, com as 4 operações aritméticas.
    Onde cada operação deverá ser em uma sub-rotina diferente.
    Escreva uma subrotina para saída de dados.
    O programa deverá ser um menu de 5 opções, onde:
    1. Soma
    2. Subtração
    3. Divisão
    4. Multiplicação
    5. Sair
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float somar(float num1, float num2){
    float resultado = num1 + num2;
    return resultado;
}

float subtrair(float num1, float num2){
    float resultado = num1 - num2;
    return resultado;
}

float multiplicar(float num1, float num2){
    float resultado = num1 * num2;
    return resultado;
}

float dividir(float num1, float num2){
    float resultado = num1 / num2;
    return resultado;
}

float pedirNumero(int num) {
    float numero;
    printf("Informe o %d° número: ", num);
    scanf("%f", &numero);

    return numero;

}

int menu() {
    int op;
    printf(
        "1. Soma\n"
        "2. Subtração\n"
        "3. Divisão\n"
        "4. Multiplicação\n"
        "5. Sair\n"
        "Escolha: "
    );
    scanf("%d", &op);

    return op;
}


int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int opcao;
    float numero1, numero2, resultado;

    do {
        system("clear");

        opcao = menu();

        if(opcao >= 1 && opcao <= 4) {
            numero1 = pedirNumero(1);
            numero2 = pedirNumero(2);
        }
        
        switch(opcao) {
            case 1:
                resultado = somar(numero1, numero2);
                printf("O resultado é %.2f\n", resultado);
                system("pause");
            break;

            case 2:
                resultado = subtrair(numero1, numero2);
                printf("O resultado é %.2f\n", resultado);
                system("pause");
            break;
            
            case 3:
                if(numero2 == 0) {
                    printf("Não existe divisão por ZERO\n");
                } else {
                    resultado = dividir(numero1, numero2);
                    printf("O resultado é %.2f\n", resultado);
                }
                system("pause");
            break;

            case 4:
                resultado = multiplicar(numero1, numero2);
                printf("O resultado é %.2f\n", resultado);
                system("pause");
            break;

            case 5:
                printf("Saindo do sistema... :)\n");
            break;

            default:
                printf("Opção inválida!!\n");
                system("pause");
            break;
        }
        
    }while(opcao != 5);

    return 0;
}