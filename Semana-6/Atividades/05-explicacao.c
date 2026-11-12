/*
    Parâmetros, Argumentos e Retorno

    Quando trabalhamos com funções, podemos enviar informações
    para elas através de parâmetros.

    Também podemos fazer uma função devolver um resultado através
    do comando "return".


    PARÂMETRO:
    É a variável declarada na criação da função.

    ARGUMENTO:
    É o valor que enviamos para a função quando fazemos a chamada.

    RETURN:
    É utilizado para devolver um valor para quem chamou a função.


    Exemplo:

    int somar(int numero1, int numero2)

    numero1 e numero2 são PARÂMETROS.

    Quando fazemos:

    somar(10, 20)

    10 e 20 são ARGUMENTOS.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// ============================================================
// PROCEDIMENTO COM PARÂMETRO
// ============================================================

// O procedimento recebe um parâmetro chamado "nome".
//
// O parâmetro é uma variável local da função.
// Ele recebe o valor que for enviado durante a chamada.
void mostrarNome(char nome[])
{
    printf("Nome: %s\n", nome);
}


// ============================================================
// FUNÇÃO COM PARÂMETROS E RETORNO
// ============================================================

// numero1 e numero2 são PARÂMETROS.
//
// A função recebe dois valores, realiza uma operação
// e retorna o resultado.
int somar(int numero1, int numero2)
{
    int resultado = numero1 + numero2;

    return resultado;
}


int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    char nome[30] = "Mikelli";


    // ========================================================
    // ARGUMENTOS
    // ========================================================

    // "Alex Gonçalves" é o ARGUMENTO enviado para a função.
    //
    // O valor será recebido pelo parâmetro "nome".
    mostrarNome("Alex Gonçalves");
    mostrarNome(nome);


    // ========================================================
    // PARÂMETROS E ARGUMENTOS
    // ========================================================

    // Nesta chamada:
    //
    // 10 é o primeiro ARGUMENTO.
    // 20 é o segundo ARGUMENTO.
    //
    // Eles serão recebidos pelos parâmetros:
    //
    // numero1 = 10
    // numero2 = 20
    int resultado = somar(10, 20);


    // A função somar() utilizou "return" para devolver
    // o resultado da soma.
    //
    // Esse valor retornado foi armazenado na variável
    // "resultado".
    printf("Resultado da soma: %d\n", resultado);
    printf("Resultado da soma: %d\n", somar(20, 30));


    return 0;
}