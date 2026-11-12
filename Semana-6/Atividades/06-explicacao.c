/*
    RECURSIVIDADE

    Recursividade acontece quando uma função chama a si mesma.

    Uma função recursiva precisa obrigatoriamente ter:

    1. CASO BASE
       É a condição que faz a função parar de chamar a si mesma.

    2. CASO RECURSIVO
       É a parte em que a função chama a si mesma,
       normalmente trabalhando com um problema menor.

    A ideia é:

        resolver um problema
              ↓
        chamar a própria função
              ↓
        resolver um problema menor
              ↓
        chamar novamente
              ↓
             ...
              ↓
        chegar ao caso base
              ↓
        começar a retornar
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
    Esta função recebe um número e faz uma contagem regressiva.

    Exemplo:

        contar(5);

    A função vai imprimir:

        5
        4
        3
        2
        1
        Fim!
*/
void contar(int numero)
{
    /*
        CASO BASE

        Quando chegamos em 0, não precisamos mais
        chamar a função.

        É isso que impede a recursividade de continuar
        para sempre.
    */
    if (numero == 0) {
        printf("Fim!\n");
        return;
    }


    /*
        Mostramos o número atual.
    */
    printf("%d\n", numero);


    /*
        CASO RECURSIVO

        A função chama ela mesma, mas passando
        um problema menor.

        Se recebemos 5:

            contar(5)

        chamamos:

            contar(4)

        Depois:

            contar(3)

        E assim por diante.
    */
    contar(numero - 1);
}


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    contar(5);

    return 0;
}
