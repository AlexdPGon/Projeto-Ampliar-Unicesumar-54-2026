#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cls || clear");

    printf("===============================================================\n");
    printf("   AULA EXPLICATIVA: SCANF VS FGETS E RESOLUÇÃO COM STRCSPN   \n");
    printf("===============================================================\n\n");

    /*
     * =========================================================================
     * TEORIA: SCANF COM %s vs FGETS
     * =========================================================================
     * 
     * 1. SCANF com %s:
     *    Sintaxe: scanf("%s", variavel);  // Nota: vetores não usam '&' no scanf!
     * 
     *    VANTAGENS:
     *    - Sintaxe muito simples e direta.
     *    - Ótimo para ler apenas UMA única palavra (ignora espaços iniciais).
     * 
     *    DESVANTAGENS:
     *    - NÃO lê espaços! A leitura para no primeiro espaço ' ', tabulação ou enter.
     *      Exemplo: Se digitar "Alex Gonçalves", ele lê apenas "Alex".
     *      O restante (" Gonçalves") fica preso no buffer do teclado!
     *    - Inseguro (Risco de Buffer Overflow): Se o usuário digitar um texto maior
     *      do que o tamanho do vetor, ele invade posições vizinhas de memória.
     * 
     * -------------------------------------------------------------------------
     * 
     * 2. FGETS:
     *    Sintaxe: fgets(variavel, sizeof(variavel), stdin);
     * 
     *    VANTAGENS:
     *    - Seguro contra Buffer Overflow: O 2° parâmetro (sizeof) limita a leitura
     *      exatamente ao tamanho disponível no vetor, evitando invasão de memória.
     *    - Lê a LINHA INTEIRA, aceitando espaços, ideal para nomes completos e frases.
     * 
     *    DESVANTAGENS:
     *    - Captura a tecla ENTER ('\n') e a armazena DENTRO do próprio vetor antes
     *      do terminador nulo '\0'.
     *    - Isso gera quebras de linha automáticas e indesejadas ao imprimir ou comparar.
     * 
     * -------------------------------------------------------------------------
     * 
     * 3. A SOLUÇÃO ELEGANTE COM STRCSPN (<string.h>):
     *    Sintaxe: variavel[strcspn(variavel, "\n")] = '\0';
     * 
     *    COMO FUNCIONA?
     *    - A função strcspn(variavel, "\n") percorre a string e devolve a posição
     *      (índice) exata onde está o caractere '\n'.
     *    - Ao fazer variavel[indice] = '\0', substituímos o '\n' pelo terminador nulo.
     *    - O resultado é uma string limpa, sem quebra de linha indesejada!
     * =========================================================================
     */

    int idade;
    char nomeCompleto[50];
    char curso[50];

    // --- DEMONSTRAÇÃO PRÁTICA ---

    /*
     * PASSO 1: Lendo um número com scanf
     * Atenção: O scanf lê apenas o número. A tecla ENTER (\n) que o usuário apertou
     * fica pendente no buffer do teclado!
     */
    printf("1. Informe sua idade: ");
    scanf("%d", &idade);

    /*
     * LIMPEZA DO BUFFER (getchar):
     * Se não limparmos o buffer com getchar(), o próximo fgets vai ler imediatamente
     * o '\n' que ficou sobrando e vai "pular" a pergunta do nome!
     */
    getchar(); 

    /*
     * PASSO 2: Lendo o nome com fgets e limpando o '\n' com strcspn
     */
    printf("2. Informe seu nome completo (pode conter espaços): ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
    nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0'; // Remove o '\n' gerado pelo Enter

    /*
     * PASSO 3: Lendo o curso com fgets e limpando com strcspn
     */
    printf("3. Informe o seu curso: ");
    fgets(curso, sizeof(curso), stdin);
    curso[strcspn(curso, "\n")] = '\0'; // Remove o '\n' gerado pelo Enter

    /*
     * PASSO 4: Exibição dos dados
     * Como tratamos as quebras de linha com strcspn, podemos imprimir
     * os textos com formatação precisa, sem quebras indesejadas no meio!
     */
    printf("\n================ DADOS CADASTRADOS ================\n");
    printf("Idade:         %d anos\n", idade);
    printf("Nome Completo: %s\n", nomeCompleto);
    printf("Curso:         %s\n", curso);
    printf("Mensagem:      Olá, %s! Bons estudos no curso de %s!\n", nomeCompleto, curso);
    printf("===================================================\n");

    return 0;
}

