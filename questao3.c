#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Questão 3 da lista de exercícios

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int n, sdiv = 0, cont = 1;

  printf("Digite um número: ");
  scanf("%d", & n);

  while (cont < n) {
    if (n % cont == 0) {
      sdiv = sdiv + cont;
    }
    cont = cont + 1;
  }

  if (sdiv == n) {
    printf("\nO número %d é perfeito", n);
  } else {
    printf("\nO número %d não é perfeito", n);
  }

  getch();
  return 0;
}
