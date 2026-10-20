#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cls || clear");

    printf("=====================================================\n");
    printf("   AULA EXPLICATIVA: VETORES NUMÉRICOS (ARRAYS)     \n");
    printf("=====================================================\n\n");

    /* 
     * 1. DIFERENÇA ENTRE VARIÁVEL NORMAL E VETOR:
     * 
     * - Variável Normal (Simples):
     *   Armazena apenas UM único valor por vez na memória.
     *   Se você atribuir um novo valor a ela, o valor antigo é SOBRESCRITO (perdido).
     */
    printf("--- 1. Variável Normal vs Vetor ---\n");
    int numeroSimples = 10;
    printf("Valor inicial da variável simples: %d\n", numeroSimples);

    numeroSimples = 25; // O valor 10 foi perdido!
    printf("Novo valor da variável simples:    %d (o 10 foi substituído)\n\n", numeroSimples);

    /* 
     * - Vetor (Estrutura Homogênea / Array):
     *   É uma sequência de variáveis do MESMO tipo, armazenadas de forma contínua na memória.
     *   Cada posição possui um ÍNDICE, que em C SEMPRE começa em 0 e vai até (tamanho - 1).
     *   Permite guardar vários valores sob um mesmo nome!
     */


    /* 
     * 2. COMO DECLARAR UM VETOR:
     * 
     * Sintaxe: tipo nome[tamanho];
     * Exemplo: int vetorNumerico[5];
     * 
     * Isso reserva 5 posições consecutivas para inteiros:
     * posições: [0], [1], [2], [3], [4]
     * ATENÇÃO: Ao apenas declarar, ele contém "lixo de memória" até ser preenchido!
     */
    printf("--- 2. Como Declarar um Vetor ---\n");
    int vetorNumerico[5];
    printf("Vetor 'vetorNumerico[5]' declarado com sucesso na memória.\n\n");


    /* 
     * 3. DECLARAR E INICIALIZAR DIRETAMENTE:
     * 
     * Você pode declarar e já atribuir os valores iniciais usando chaves { }:
     * Exemplo: int outroVetor[5] = {55, 22, 13, 10, 30};
     */
    printf("--- 3. Declarar e Inicializar Diretamente ---\n");
    int outroVetor[5] = {55, 22, 13, 10, 30};

    printf("Valores do 'outroVetor' inicializado:\n");
    for (int i = 0; i < 5; i++) {
        printf("Índice [%d] = %d\n", i, outroVetor[i]);
    }
    printf("\n");


    /* 
     * 4. DECLARAR, PEDIR PARA O USUÁRIO DIGITAR E MOSTRAR TODOS:
     * 
     * Usamos um laço de repetição (for) para percorrer cada posição [i] do vetor.
     * No scanf, passamos o endereço da posição específica: &vetorNumerico[i]
     */
    printf("--- 4. Entrada de Dados pelo Usuário ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Informe o %d° número (para o índice [%d]): ", i + 1, i);
        scanf("%d", &vetorNumerico[i]);
    }

    printf("\n--- 5. Exibindo Todos os Elementos Digitados ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Posição [%d] -> Valor: %d\n", i, vetorNumerico[i]);
    }

    printf("\nFim da explicação sobre vetores!\n");
    return 0;
}

