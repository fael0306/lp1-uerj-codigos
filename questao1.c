#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 1 da primeira lista

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int c = 0;
  int x = 0;

  while (1) {
    x = 105 * c + 88;
    if (x % 3 == 2 && x % 5 == 3 && x % 7 == 4) {
      printf("O menor inteiro positivo que atende às condições é: %d", x);
      break;
    }
    c++;
  }

  return 0;
}
