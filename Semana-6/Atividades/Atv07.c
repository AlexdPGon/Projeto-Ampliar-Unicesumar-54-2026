#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char maridoPergunta() {
    printf("Marido pergunta:\nMuié, tem café aí? Sim ou Não?");
    return 'S';
}

void falaDoMacho() {
    printf("Marido fala:\nPoe por favor um golin ai pa mim\n");
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    // char respostaDaMuie = maridoPergunta();

    printf("\nResposta da muié é %c\n", maridoPergunta());
    falaDoMacho();

    return 0;
}