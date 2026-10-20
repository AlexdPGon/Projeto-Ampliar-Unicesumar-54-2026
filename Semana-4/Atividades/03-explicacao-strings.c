#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cls || clear");

    printf("=====================================================\n");
    printf("   AULA EXPLICATIVA: STRINGS (VETORES DE CARACTERES) \n");
    printf("=====================================================\n\n");

    /* 
     * 1. DIFERENÇA ENTRE CHAR NORMAL E UMA STRING:
     * 
     * - Variável 'char' Comum (Simples):
     *   Armazena apenas UM único caractere (letra, símbolo ou dígito).
     *   Usa sempre aspas simples ' '.
     */
    printf("--- 1. Variável char Comum vs String ---\n");
    char letraSimples = 'A';
    printf("Char simples: %c (guarda apenas 1 caractere)\n", letraSimples);

    letraSimples = 'B'; // O caractere 'A' foi substituído!
    printf("Char simples alterado: %c\n\n", letraSimples);

    /* 
     * - String (Vetor de char):
     *   Em linguagem C NÃO existe o tipo nativo "string".
     *   Uma String é um VETOR DE CARACTERES (char[]) que termina obrigatoriamente
     *   com o caractere nulo '\0' (barra-zero), indicando onde o texto acaba.
     *   Usa sempre aspas duplas " ".
     */


    /* 
     * 2. COMO DECLARAR UMA STRING:
     * 
     * Sintaxe: char nomeDaString[tamanho];
     * Exemplo: char meuNome[30];
     * 
     * IMPORTANTE: Se o vetor tem tamanho 30, ele guarda no máximo 29 caracteres
     * úteis, pois 1 posição é reservada para o caractere finalizador '\0'.
     */
    printf("--- 2. Como Declarar uma String ---\n");
    char meuExemplo[30]; // Declarada sem inicialização (contém lixo de memória)
    strcpy(meuExemplo, "Texto Exemplo"); // Copiando um texto para a string declarada
    printf("String declarada e preenchida com strcpy: %s\n\n", meuExemplo);


    /* 
     * 3. DECLARAR E INICIALIZAR DIRETAMENTE:
     * 
     * Ao inicializar com aspas duplas "", o compilador coloca o '\0' automaticamente no fim:
     * Exemplo: char nomeInicializado[30] = "Alex";
     */
    printf("--- 3. Declarar e Inicializar Diretamente ---\n");
    char nomeInicializado[30] = "Alex";

    // Para exibir uma string completa, usamos a máscara %s:
    printf("Nome inicializado: %s\n", nomeInicializado);

    // Como é um vetor, ainda podemos acessar cada caractere pelo índice [i]:
    printf("Acessando índices do vetor de char:\n");
    for (int i = 0; i < 5; i++) {
        if (nomeInicializado[i] == '\0') {
            printf("  nomeInicializado[%d] = '\\0' (terminador nulo de fim de texto)\n", i);
        } else {
            printf("  nomeInicializado[%d] = '%c'\n", i, nomeInicializado[i]);
        }
    }
    printf("\n");


    /* 
     * 4. DECLARAR, PEDIR PARA O USUÁRIO DIGITAR E MOSTRAR:
     * 
     * Declaramos o vetor e lemos a entrada do usuário.
     * Ao usar fgets com stdin, lemos a linha inteira de forma segura.
     * (No arquivo 04 veremos em detalhes o scanf vs fgets e o strcspn).
     */
    printf("--- 4. Declarar e Pedir para o Usuário Digitar ---\n");
    char nomeDigitado[30];

    printf("Digite o seu nome: ");
    fgets(nomeDigitado, sizeof(nomeDigitado), stdin);
    nomeDigitado[strcspn(nomeDigitado, "\n")] = '\0'; // Remove o \n do Enter

    printf("\n--- 5. Exibindo o Nome Digitado ---\n");
    printf("Nome digitado: %s\n", nomeDigitado);
    printf("Primeira letra: %c (índice [0])\n", nomeDigitado[0]);

    printf("\nFim da explicação sobre Strings!\n");
    return 0;
}
