/*
    Escreva um programa que receba o modelo e o preço de 4 carros.
    O programa deverá informar qual é o carro mais barato e qual o mais caro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXCARROS 4

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    char modelos[MAXCARROS][30];
    float precos[MAXCARROS];
    int menorPreco, maiorPreco;

    for (int i= 0; i < MAXCARROS; i++ ){
        printf("\nInforme o modelo do %d carro: ", i + 1);
        fgets(modelos[i], sizeof(modelos[i]), stdin);
        modelos[i][strcspn(modelos[i], "\n")] = '\0';
        
        printf("Informe o preço %s: ", modelos[i]);
        scanf("%f", &precos[i]);
        getchar();

        if(i == 0) {
            maiorPreco = i;
            menorPreco = i;
        } else {
            if(precos[i] > precos[maiorPreco]) {
                maiorPreco = i;
            }
        
            if(precos[i] < precos[menorPreco]) {
                menorPreco = i;
            }
        }
    }

    printf("O carro mais barato é o modelo %s, que está no valor de R$ %.2f!\n", modelos[menorPreco], precos[menorPreco]);
    
    printf("O carro mais caro é o modelo %s, que está no valor de R$ %.2f!", modelos[maiorPreco], precos[maiorPreco])  ;

    return 0;
}