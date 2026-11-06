/*
    Escreva um programa em C que receba o nome do modelo de 
    4 carros e seus valores de FIPE. Desta vez, utilizando estrutura Heterogênea.

    O programa deverá retornar o carro mais caro e o mais barato.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXCARROS 4

typedef struct{
    char modelo[35];
    float valor;
} TipoCarro;

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");
    
    TipoCarro carros[MAXCARROS];
    int carroCaro, carroBarato;

    for(int i = 0; i < MAXCARROS; i++){
        printf("Digite o modelo do  %dº carro: ", i+1);
        fgets(carros[i].modelo,sizeof(carros[i].modelo),stdin);
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';

        printf("Digite o valor do %s: ", carros[i].modelo);
        scanf("%f", &carros[i].valor);
        getchar();

        if(i == 0){
            carroCaro = i;
            carroBarato = i;
        } else {
            if(carros[i].valor > carros[carroCaro].valor){
                carroCaro = i;
            }

            if (carros[i].valor < carros[carroBarato].valor){
                carroBarato = i;
            }
        }
    }
    
    printf(
        "### CARRO MAIS CARO ###\n"
        "Modelo: %s\n"
        "Valor: R$%.2f\n\n",
        carros[carroCaro].modelo,
        carros[carroCaro].valor
    );

    printf(
        "### CARRO MAIS BARATO ###\n"
        "Modelo: %s\n"
        "Valor: R$%.2f\n\n",
        carros[carroBarato].modelo,
        carros[carroBarato].valor
    );
    
    return 0;
}