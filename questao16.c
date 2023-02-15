#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Questão 16 da lista

#define NUM_ROUNDS 11
#define NUM_DICE 2
#define NUM_SIDES 6

void print_dice_roll(int player, int roll) {
  printf("O jogador %d rolou: %d\n", player, roll);
}

int roll_dice() {
  return rand() % NUM_SIDES + 1;
}

int calculate_roll_sum(int rolls[], int num_rolls) {
  int sum = 0;
  for (int i = 0; i < num_rolls; i++) {
    sum += rolls[i];
  }
  return sum;
}

int play_round() {
  int rolls[NUM_DICE];
  for (int i = 0; i < NUM_DICE; i++) {
    rolls[i] = roll_dice();
    print_dice_roll(i + 1, rolls[i]);
  }
  int sum = calculate_roll_sum(rolls, NUM_DICE);
  printf("A soma dos dados: %d\n", sum);
  return sum;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  srand(time(NULL));
  int wins1 = 0;
  int wins2 = 0;
  for (int i = 0; i < NUM_ROUNDS; i++) {
    printf("Rodada %d:\n", i + 1);
    int sum1 = play_round();
    int sum2 = play_round();
    if (sum1 > sum2) {
      printf("O jogador 1 venceu essa rodada\n");
      wins1++;
    } else if (sum2 > sum1) {
      printf("O jogador 2 venceu essa rodada\n");
      wins2++;
    } else {
      printf("Essa rodada empateu\n");
    }
  }
  if (wins1 > wins2) {
    printf("\nO jogador 1 venceu o jogo\n");
  } else if (wins2 > wins1) {
    printf("\nO jogador 2 venceu o jogo\n");
  } else {
    printf("\nO jogo terminou em empate\n");
  }
  return 0;
}
