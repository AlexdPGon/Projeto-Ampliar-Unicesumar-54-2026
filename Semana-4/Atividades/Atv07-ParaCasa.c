/*
    Escreva 4 nomes dentro de um array
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXNOMES 4

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    char nomes[MAXNOMES][30];

    for(int i = 0; i < MAXNOMES; i++) {
        printf("Informe o %d° nome: ", i+1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    return 0;
}