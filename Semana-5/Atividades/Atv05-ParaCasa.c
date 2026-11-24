/*
    Desenvolva um programa em C que permita gerenciar as reservas
    de quartos de um hotel.

    O programa deverá apresentar o seguinte menu:

    1. Cadastrar Quartos
    2. Ver Quartos Cadastrados
    3. Realizar Reserva
    4. Sair

    Cada quarto possui:
    - Número do quarto
    - Tipo do quarto (Solteiro, Casal ou Suíte)
    - Valor da diária
    - Quantidade de dias disponíveis para reserva

    Regras:

    - O programa deverá continuar executando até que o usuário
      escolha a opção 4.

    - O sistema deverá permitir o cadastro ATÉ 5 quartos.

    - Não será permitido cadastrar dois quartos com o mesmo número.

    - Ao realizar uma reserva, o usuário deverá informar o número
      do quarto e a quantidade de dias desejada.

    - O programa deverá verificar se o quarto está cadastrado
      e se possui disponibilidade para o período solicitado.

    - Caso a reserva seja válida, o programa deverá calcular e
      apresentar o valor total da hospedagem.

    - Caso não exista disponibilidade suficiente, deverá informar
      ao usuário que a reserva não pode ser realizada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXQUARTOS 5

typedef struct {
  int numeroQuarto;
  int tipoQuarto;
  float valorDiaria;
  int diasDisponiveis;
} TipoQuarto;

int menu() {
  int opc;
  printf(
    "1. Cadastrar Quarto\n"
    "2. Ver Quartos Cadastrados\n"
    "3. Realizar Reserva\n"
    "4. Sair\n"
    "Escolha: "
  );
  scanf("%d", &opc);

  return opc;
}

TipoQuarto cadastrarQuarto(TipoQuarto quartos[], int contador) {
  TipoQuarto quartoCadastrado;
  bool quartoExiste;

  do {
    quartoExiste = false;
    printf("Informe o NÚMERO do quarto: ");
    scanf("%d", &quartoCadastrado.numeroQuarto);

    for(int i = 0; i < contador; i++) {
      if(quartoCadastrado.numeroQuarto == quartos[i].numeroQuarto) {
        printf("Este número de quarto já existe\n");
        quartoExiste = true;
      }
    }
  } while(quartoExiste);
  

  do {
    printf(
      "Informe o TIPO do quarto entre\n"
      "1 - Solteiro\n"
      "2 - Casal\n"
      "3 - Suíte\n"
      "Escolha: "
    );

    scanf("%d", &quartoCadastrado.tipoQuarto);
  } while(quartoCadastrado.tipoQuarto < 1 || quartoCadastrado.tipoQuarto > 3);

  printf("\nInforme o VALOR DA DIÁRIA: ");
  scanf("%f", &quartoCadastrado.valorDiaria);

  printf("Informe a QUANTIDADE DE DIAS DISPONÍVEIS: ");
  scanf("%d", &quartoCadastrado.diasDisponiveis);

  return quartoCadastrado;
}

void verificarTipoQuarto(int tipo) {
  if(tipo == 1) {
    printf("TIPO: Solteiro\n");
  } else if(tipo == 2) {
    printf("TIPO: Casal\n");
  } else {
    printf("TIPO: Suíte\n");
  }
}

void mostrarQuartosCadastrados(TipoQuarto quarto[], int contador) {
  
  printf("### QUARTOS CADASTRADOS ###\n");
  for(int i = 0; i < contador; i++) {
    printf(
      "Número do quarto: %d\n",
      quarto[i].numeroQuarto
    );

    verificarTipoQuarto(quarto[i].tipoQuarto);

    printf(
      "Valor da diária: R$%.2f\n"
      "Dias disponíveis: %d\n\n",
      quarto[i].valorDiaria,
      quarto[i].diasDisponiveis
    );
  }
}

void realizarReserva(TipoQuarto quartos[], int contador){
  int numeroInformado, reservaDesejada;
  bool quartoExiste;

  do {
    quartoExiste = false;
    printf("Informe o número do quarto desejado: ");
    scanf("%d", &numeroInformado);

    for(int i = 0; i < contador; i++) {
      if(numeroInformado == quartos[i].numeroQuarto) {
        quartoExiste = true;

        printf("Qual a quantidade de DIAS de reserva: ");
        scanf("%d", &reservaDesejada);

        if(reservaDesejada > 0 && reservaDesejada <= quartos[i].diasDisponiveis) {
          float precoTotal = quartos[i].valorDiaria * reservaDesejada;
          printf(
            "O valor total da reserva ficou em R$%.2f\n"
            "RESERVA REALIZADA!\n",
            precoTotal
          );
          quartos[i].diasDisponiveis -= reservaDesejada;
        } else {
          printf("A quantidade de dias não está disponível\n");
        }
      }
    }
  } while(!quartoExiste);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    TipoQuarto quartos[MAXQUARTOS];
    int opcao, contador = 0;

    do {
      system("clear");
      opcao = menu();

      switch (opcao) {
        case 1:
          if(contador == MAXQUARTOS) {
            printf("Não é possível fazer mais cadastros!!\n");
          } else {
            quartos[contador] = cadastrarQuarto(quartos, contador);
            contador++;
          }
          
          system("pause");
        break;

        case 2:
          if(contador == 0) {
            printf("Nenhum quarto cadastrado!!\n");
          } else {
            mostrarQuartosCadastrados(quartos, contador);
          }
          
          system("pause");
        break;

        case 3:
          if(contador == 0) {
            printf("Nenhum quarto cadastrado!!\n");
          } else {
            realizarReserva(quartos, contador);
          }
          
          system("pause");
        break;

        case 4:
          printf("Encerrando o sistema...\n");
        break;
        
        default:
          printf("Opção inválida!!\n");
          system("pause");
        break;
      }

    } while(opcao != 4);

    return 0;
}