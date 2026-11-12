/*
    Escopo de Variáveis

    O escopo define onde uma variável pode ser acessada dentro do código.

    Em C, uma variável pode ter diferentes escopos.
    Neste exemplo, vamos começar entendendo o escopo LOCAL:

    - Uma variável criada dentro de um bloco {} só pode ser acessada
      dentro daquele bloco e dos blocos que estiverem dentro dele.
    - Um bloco pode ser a main, um if, um for, um while, etc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int variavelDentroDaMain = 14;
    // A variável foi criada dentro da main.
    // Por isso, ela pode ser acessada em qualquer lugar dentro da main.

    printf("variavelDentroDaMain dentro da main: %d\n", variavelDentroDaMain);

    // O if está dentro da main.
    // Por isso, ele consegue acessar a variável criada na main.
    if (variavelDentroDaMain > 10) {
        variavelDentroDaMain = 30;
        printf("variavelDentroDaMain dentro do primeiro IF: %d\n", variavelDentroDaMain);

        int variavelDentroDoIf = 50;
        // Esta variável foi criada dentro do IF.
        // Portanto, ela pertence ao escopo deste IF.

        // Ela pode ser acessada aqui dentro e também dentro
        // de outros blocos que estejam dentro deste IF.

        printf("variavelDentroDoIf dentro do primeiro IF: %d\n", variavelDentroDoIf);

        // Este SEGUNDO IF está dentro do primeiro IF.
        // Por isso, ele consegue acessar as variáveis
        // variavelDentroDoIf criada no IF externo.
        // variavelDentroDaMain criado na main
        if(variavelDentroDaMain < variavelDentroDoIf) {
            variavelDentroDoIf = 100;
            variavelDentroDaMain = 400;
            printf("variavelDentroDoIf dentro do SEGUNDO IF: %d\n", variavelDentroDoIf);
            printf("variavelDentroDaMain dentro do SEGUNDO IF: %d\n", variavelDentroDaMain);
        }
    }

    // A variável variavelDentroDaMain continua existindo aqui,
    // porque ela foi criada no escopo da main.
    //
    // Além disso, seu valor foi alterado dentro do PRIMEIRO IF e logo depois do SEGUNDO IF.
    printf("variavelDentroDaMain dentro da main depois de passar pelos  2 IFs: %d\n", variavelDentroDaMain);

    // variavelDentroDoIf não pode ser acessada aqui.
    //
    // Ela foi criada dentro do primeiro IF e seu escopo terminou
    // quando chegamos ao fechamento das chaves desse IF.
    //
    // Por isso, esta linha causaria um erro:
    // printf("%d\n", variavelDentroDoIf);

    return 0;
}