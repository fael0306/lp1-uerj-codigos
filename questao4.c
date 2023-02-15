#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 4 da lista

int fatorial(int n) {
  int r;

  if (n > 1) {
    r = n * fatorial(n - 1);
  } else {
    r = 1;
  }
  return r;
}

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int n, f;

  printf("Digite um número: ");
  scanf("%d", & n);

  f = fatorial(n);

  printf("\nO fatorial de %d é: %d", n, f);

  getch();
  return 0;
}
