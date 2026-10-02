/*
    ### Desafio: Sistema de acesso ###

    Imagine que você está desenvolvendo um sistema responsável por analisar algumas informações antes de liberar o acesso de um usuário.

    O sistema recebeu os seguintes dados:

    O código de identificação registrado pelo sistema é 13, enquanto o código esperado é 29.
    A temperatura registrada foi de 11 graus e precisa ser comparada com um limite de referência de -37 graus.
    A pontuação atual do usuário é de 20 pontos, enquanto a pontuação mínima exigida é de 11 pontos.

    Agora, o sistema precisa realizar algumas verificações seguindo exatamente estas regras:

    Primeiro, verifique se o código de identificação registrado (13) é diferente do código esperado (29). O resultado dessa verificação deve ser invertido.
    Depois, verifique se a temperatura registrada (11 graus) é menor ou igual ao limite de referência (-37 graus). O resultado dessa verificação também deve ser invertido.
    Depois dessas duas verificações, o sistema deve considerar que pelo menos uma delas precisa ser verdadeira.
    O resultado dessa análise deve ser combinado com uma terceira verificação: a pontuação atual (20 pontos) deve ser maior ou igual à pontuação mínima exigida (11 pontos). Para essa etapa, as duas condições precisam ser verdadeiras ao mesmo tempo.
    Por fim, o resultado de toda essa análise deve ser invertido novamente.
    
    ### Sua missão ###

    Transforme todas essas regras em uma única expressão lógica na linguagem C e armazene o resultado na variável:

    retornoBool

    Atenção: não escreva os operadores diretamente a partir do texto. Primeiro interprete o significado de cada regra e depois transforme-a em código.

    ### Desafio extra ###

    Depois de escrever a expressão, tente descobrir qual será o valor final armazenado em retornoBool sem executar o programa.

    Só depois execute o código para conferir se seu raciocínio estava correto.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    bool retornoBool;

    // retornoBool = descomente, apague este comentário e escreva a expressão aqui;

    printf("Valor do retorno: %d\n", retornoBool);

    return 0;
}