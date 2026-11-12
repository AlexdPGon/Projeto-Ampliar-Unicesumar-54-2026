/*
    Escopo de Variáveis
    Variável Global.

    Uma variável global é uma variável declarada fora de qualquer função.

    Por estar fora das funções, ela pode ser acessada por diferentes
    partes do programa, desde que respeitadas as regras de escopo.

    Neste exemplo, vamos comparar uma variável global com uma
    variável local criada dentro da main.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Esta variável foi criada fora da main.
// Por isso, ela é uma variável GLOBAL.

int variavelGlobal = 10;

int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    // Esta variável foi criada dentro da main.
    // Por isso, ela é uma variável LOCAL da main.
    int variavelDentroDaMain = 14;

    // A variável global pode ser acessada dentro da main,
    // mesmo tendo sido criada fora dela.
    printf("variavelGlobal dentro da main: %d\n", variavelGlobal);

    printf("variavelDentroDaMain dentro da main: %d\n", variavelDentroDaMain);

    if (variavelGlobal < variavelDentroDaMain) {

        // O IF também consegue acessar a variável global,
        // pois ela está disponível fora desse escopo.
        variavelGlobal = 30;

        printf("variavelGlobal dentro do IF: %d\n", variavelGlobal);

        // O IF também consegue acessar a variável criada na main,
        // porque o IF está dentro da main.
        variavelDentroDaMain = 50;

        printf("variavelDentroDaMain dentro do IF: %d\n", variavelDentroDaMain);
    }

    // A variável global continua podendo ser acessada aqui.
    // Ela existe durante toda a execução do programa.
    printf("variavelGlobal depois do IF: %d\n", variavelGlobal);

    // A variável local da main também pode ser acessada aqui,
    // pois ainda estamos dentro do escopo da main.
    printf("variavelDentroDaMain depois do IF: %d\n", variavelDentroDaMain);

    return 0;
}