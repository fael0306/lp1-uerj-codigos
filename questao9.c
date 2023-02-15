#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Questão 9 da lista

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  char p[80];
  int cont = 0, t, i, j;

  printf("Digite uma palavra: ");
  scanf("%s", p); // não é necessário utilizar & em p, pois é um array

  t = strlen(p);

  for (i = 0; i < t; i++) {
    // percorre a string a partir da posição atual
    for (j = i + 1; j < t; j++) {
      if (p[i] == p[j]) {
        t--;
        // move todos os elementos uma posição para trás, 
        // removendo o caractere repetido na posição atual
        for (int k = j; k < t; k++) {
          p[k] = p[k + 1];
        }
        j--; // decrementa j para voltar a analisar a mesma posição
      }
    }
  }

  printf("O número de caracteres distintos é: %d", t);

  getch();
  return 0;
}
