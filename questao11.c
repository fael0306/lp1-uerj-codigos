#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Questão 11 da lista

int contar_vogais(char* palavra) {
  int vogais = 0;
  for (int i = 0; i < strlen(palavra); i++) {
    char c = tolower(palavra[i]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      vogais++;
    }
  }
  return vogais;
}

int main(void) {

  char frase[80];
  char *palavra;
  int vogais;

  printf("Entre uma frase: ");
  fgets(frase, sizeof(frase), stdin);
  if (frase[strlen(frase) - 1] == '\n') {
    frase[strlen(frase) - 1] = '\0'; // remove o caractere '\n' inserido pelo fgets
  }
  
  printf("\nPalavras com 3 ou mais vogais:\n\n");
  palavra = strtok(frase, " ");

  while (palavra != NULL) {   
    vogais = contar_vogais(palavra);
    if (vogais >= 3) {
      printf("%s\n", palavra);
    }
    palavra = strtok(NULL, " ");
  }
  
  return 0;
}

