#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_FRASE 100
#define MAX_PALAVRA 50
#define MAX_CARACTERES 20

int main() {
  char frase[MAX_FRASE];
  char palavras[MAX_PALAVRA][MAX_CARACTERES];
  char palavras_distintas[MAX_PALAVRA][MAX_CARACTERES];
  int frequencias[MAX_PALAVRA] = {
    0
  };
  int num_palavras = 0;
  int num_palavras_distintas = 0;
  int i, j;

  printf("Digite uma frase: ");
  scanf(" %[^\n]s", frase);

  // Converter a frase para letras minúsculas
  for (i = 0; frase[i]; i++) {
    frase[i] = tolower(frase[i]);
  }

  // Separar as palavras da frase
  char * token = strtok(frase, " ,.");
  while (token != NULL) {
    // Armazenar a palavra na matriz de palavras
    strcpy(palavras[num_palavras], token);
    num_palavras++;

    // Atualizar a frequência da palavra (se já encontrada)
    for (i = 0; i < num_palavras_distintas; i++) {
      if (strcmp(palavras_distintas[i], token) == 0) {
        frequencias[i]++;
        break;
      }
    }

    // Adicionar a palavra na lista de palavras distintas (se ainda não foi encontrada)
    if (i == num_palavras_distintas) {
      strcpy(palavras_distintas[num_palavras_distintas], token);
      frequencias[num_palavras_distintas]++;
      num_palavras_distintas++;
    }

    // Obter a próxima palavra
    token = strtok(NULL, " ,.");
  }

  // Imprimir as frequências das palavras distintas
  for (i = 0; i < num_palavras_distintas; i++) {
    printf("A palavra \"%s\" aparece %d vezes.\n", palavras_distintas[i], frequencias[i]);
  }

  return 0;
}
