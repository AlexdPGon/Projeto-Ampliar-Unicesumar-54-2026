/*
    Escopo de Variáveis
    Variável Local em Funções / Procedimentos.

    Uma variável local é uma variável criada dentro de uma função
    ou dentro de um bloco {}.

    Quando uma variável é criada dentro de uma função, ela pertence
    ao escopo daquela função.

    Isso significa que outra função não consegue acessar diretamente
    essa variável.

    Neste exemplo, vamos comparar:

    - Variável global
    - Variável local da main
    - Variável local de outra função
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Esta variável foi criada fora de qualquer função / procedimento.
// Por isso, ela é uma variável GLOBAL.
int variavelGlobal = 10;


// Este procedimento possui seu próprio escopo.
void exemploProcedimento()
{
    // Esta variável foi criada dentro da função / procedimento.
    // Por isso, ela é uma variável LOCAL da função exemploFuncao.
    int variavelDentroDoProcedimento = 20;

    // A variável local pode ser acessada normalmente
    // dentro da própria função onde foi criada.
    printf("variavelDentroDoProcedimento dentro do procedimento: %d\n", variavelDentroDoProcedimento);

    // A variável global também pode ser acessada aqui,
    // mesmo tendo sido criada fora da função.
    printf("variavelGlobal dentro da funcao: %d\n", variavelGlobal);
}


int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    // Esta variável foi criada dentro da main.
    // Por isso, ela é uma variável LOCAL da main.
    int variavelDentroDaMain = 14;

    printf("variavelDentroDaMain dentro da main: %d\n", variavelDentroDaMain);

    // A variável global pode ser acessada dentro da main.
    printf("variavelGlobal dentro da main: %d\n", variavelGlobal);

    // Chamando o procedimento.
    exemploProcedimento();

    /*
        O procedimento exemploProcedimento possui uma variável chamada
        variavelDentroDoProcedimento.

        Porém, essa variável pertence ao escopo da função/procedimento.

        Por isso, não podemos fazer:

        printf("%d\n", variavelDentroDoProcedimento);

        A linha acima causaria um erro, porque a main não
        consegue acessar diretamente uma variável que foi
        criada dentro de outra função.
    */

    return 0;
}
