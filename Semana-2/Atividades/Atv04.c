/*
    Escreva um algortimo que receba 2 notas de um aluno. O programa deverá calcular a média do aluno e informar se
    ele está aprovado (média maior que 7), em recuperação (média entre 5 e 7) ou reprovado (média menor que 5).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //system("clear");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float nota1, nota2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media > 7) {
        printf("Sua nota foi %.2f e está aprovado. ;)\n", media);
    } else if(media >= 5 && media <= 7) {
        printf("Sua nota foi %.2f e Está de recuperação. :)\n", media);
    } else {
        printf("Sua nota foi %.2f e Está reprovado. ;(\n", media);
    }
    
    return 0;
}