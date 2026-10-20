#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cls || clear");

    printf("=====================================================\n");
    printf("   AULA EXPLICATIVA: MATRIZES (ARRAYS BIDIMENSIONAIS)\n");
    printf("=====================================================\n\n");

    /* 
     * 1. O QUE É UMA MATRIZ? (DIFERENÇA ENTRE VETOR E MATRIZ)
     * 
     * - Vetor (Unidimensional - 1D):
     *   Possui apenas UMA dimensão (uma única linha com várias colunas).
     *   Acesso por 1 índice: vetor[i]
     * 
     * - Matriz (Bidimensional - 2D):
     *   É um "vetor de vetores", organizado em LINHAS e COLUNAS (como uma tabela ou planilha).
     *   Acesso por 2 índices: matriz[linha][coluna]
     *   Ambos os índices sempre começam em 0!
     */
    printf("--- 1. Conceito: Vetor (1D) vs Matriz (2D) ---\n");
    printf("Vetor:  1 dimensão  -> vetor[posicao]\n");
    printf("Matriz: 2 dimensões -> matriz[linha][coluna]\n\n");


    /* 
     * 2. COMO DECLARAR UMA MATRIZ:
     * 
     * Sintaxe: tipo nome[totalLinhas][totalColunas];
     * Exemplo: int matriz[2][3];
     * 
     * Cria uma matriz com 2 linhas e 3 colunas (total = 2 * 3 = 6 posições):
     *       Coluna 0    Coluna 1    Coluna 2
     * Linha 0: [0][0]      [0][1]      [0][2]
     * Linha 1: [1][0]      [1][1]      [1][2]
     */
    printf("--- 2. Como Declarar uma Matriz ---\n");
    int matrizUsuario[2][2]; // Matriz 2x2 para teste rápido de digitação
    printf("Matriz 'matrizUsuario[2][2]' declarada (2 linhas x 2 colunas = 4 elementos).\n\n");


    /* 
     * 3. DECLARAR E INICIALIZAR DIRETAMENTE:
     * 
     * Podemos inicializar separando cada linha com chaves internas { }:
     */
    printf("--- 3. Declarar e Inicializar Diretamente ---\n");
    int matrizExemplo[2][3] = {
        {10, 20, 30}, // Linha 0
        {40, 50, 60}  // Linha 1
    };

    printf("Exibindo a matriz inicializada em formato de tabela:\n");
    // O primeiro laço 'for' (i) percorre as LINHAS:
    for (int i = 0; i < 2; i++) {
        // O segundo laço 'for' (j) percorre as COLUNAS:
        for (int j = 0; j < 3; j++) {
            printf("[%2d] ", matrizExemplo[i][j]);
        }
        printf("\n"); // Pula de linha ao terminar cada linha da matriz
    }
    printf("\n");


    /* 
     * 4. DECLARAR, PEDIR PARA O USUÁRIO DIGITAR E MOSTRAR TODOS:
     * 
     * Usamos dois laços 'for' aninhados:
     * - 'i' para controlar o índice da linha
     * - 'j' para controlar o índice da coluna
     */
    printf("--- 4. Entrada de Dados na Matriz pelo Usuário ---\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor para a posição [linha %d][coluna %d]: ", i, j);
            scanf("%d", &matrizUsuario[i][j]);
        }
    }

    printf("\n--- 5. Exibindo a Matriz Digitada (Formato de Grade) ---\n");
    for (int i = 0; i < 2; i++) {
        printf("Linha %d:  ", i);
        for (int j = 0; j < 2; j++) {
            printf(" | %3d | ", matrizUsuario[i][j]);
        }
        printf("\n");
    }

    printf("\nFim da explicação sobre Matrizes!\n");
    return 0;
}

