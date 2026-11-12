/*
    Procedimentos e Funções

    Tanto procedimentos quanto funções são utilizados para organizar
    o código em partes menores e reutilizáveis.

    A principal diferença está no retorno:

    - PROCEDIMENTO: executa uma ação, mas não retorna um valor.
    - FUNÇÃO: executa uma ação e retorna um valor.


    Para criar um procedimento, utilizamos uma função com o tipo
    de retorno "void" que significa "vazio".
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// ============================================================
// PROCEDIMENTO
// ============================================================

// Um procedimento executa uma ação, mas não retorna um valor.
//
// Por isso, utilizamos "void" como tipo de retorno.
void mostrarMensagem()
{
    printf("Olá! Este é um procedimento.\n");
}


// ============================================================
// FUNÇÃO
// ============================================================

// Uma função pode executar uma ação e retornar um valor.
//
// Neste exemplo, a função calcula a soma de dois números
// e retorna o resultado.
int somar(int numero1, int numero2)
{
    // int resultado = numero1 + numero2;

    // return numero1 + numero2;
    // return resultado;

    return numero1 + numero2;
}


int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");


    // ========================================================
    // UTILIZANDO UM PROCEDIMENTO
    // ========================================================

    // O procedimento é chamado para executar uma ação.
    //
    // Não precisamos armazenar nenhum valor porque ele
    // não possui um valor de retorno.
    mostrarMensagem();


    // ========================================================
    // UTILIZANDO UMA FUNÇÃO
    // ========================================================

    // A função somar retorna um valor.
    //
    // Por isso, podemos guardar esse valor em uma variável.
    int resultado = somar(10, 20);

    printf("Resultado da soma: %d\n", resultado);

    printf("Resultado da soma: %d\n", somar(30, 50));    


    return 0;
}