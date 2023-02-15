#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_PALAVRAS 10
#define MAX_TAMANHO 100

void converte_minuscula(char * str) {
  int i = 0;
  while (str[i]) {
    str[i] = tolower(str[i]);
    i++;
  }
}

int main() {
  char frase[MAX_TAMANHO];
  char * palavras[MAX_PALAVRAS];
  char * aux;
  int i, j, n_palavras;

  printf("Digite uma frase (máximo %d palavras): ", MAX_PALAVRAS);
  fgets(frase, MAX_TAMANHO, stdin);

  // Verifica se a entrada é maior do que o tamanho máximo permitido
  if (strlen(frase) == MAX_TAMANHO - 1 && frase[MAX_TAMANHO - 2] != '\n') {
    printf("A entrada é muito longa. Por favor, tente novamente.\n");
    return 1;
  }

  // Remove os caracteres de pontuação da entrada
  for (i = 0; i < strlen(frase); i++) {
    if (!isalpha(frase[i])) {
      frase[i] = ' ';
    }
  }

  converte_minuscula(frase);

  // Separa as palavras
  n_palavras = 0;
  aux = strtok(frase, " ");
  while (aux != NULL && n_palavras < MAX_PALAVRAS) {
    palavras[n_palavras++] = aux;
    aux = strtok(NULL, " ");
  }

  // Ordena as palavras em ordem alfabética
  for (i = 0; i < n_palavras; i++) {
    for (j = i + 1; j < n_palavras; j++) {
      if (strcmp(palavras[i], palavras[j]) > 0) {
        aux = palavras[i];
        palavras[i] = palavras[j];
        palavras[j] = aux;
      }
    }
  }

  // Imprime as palavras em ordem alfabética
  printf("\nPalavras em ordem alfabética:\n");
  for (i = 0; i < n_palavras; i++) {
    printf("%s\n", palavras[i]);
  }

  return 0;
}
