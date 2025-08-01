#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  int escolhaJogador, escolhaComputador;
  srand(time(0));

  printf("Jogo Jokenpô\n\n");
  printf("Escolha uma ação:\n");
  printf("1. Pedra:\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n\n");
  printf("Escolha: ");
  scanf("%d", &escolhaJogador);

  escolhaComputador = rand() % 3 + 1;

  switch (escolhaJogador) {
    case 1:
    printf("\nJogador: Pedra\n");
    break;

    case 2:
    printf("\nJogador: Papel\n");
    break;

    case 3:
    printf("\nJogador: Tesoura\n");
    break;

    default:
    printf("\nOpção Inválida\n");
    break;
  }

  switch (escolhaComputador) {
    case 1:
    printf("Computador: Pedra\n\n");
    break;

    case 2:
    printf("Computador: Papel\n\n");
    break;

    case 3:
    printf("Computador: Tesoura\n\n");
    break;
  }

  if (escolhaComputador == escolhaJogador) {
    printf("### Empate\n\n");
  } else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
            (escolhaJogador == 2) && (escolhaComputador == 1) || 
            (escolhaJogador == 3) && (escolhaComputador == 2))
    {
        printf("***Parabéns, você ganhou!\n\n");
    } else {
        printf("***Você perdeu!\n\n");
    }

  return 0;
}