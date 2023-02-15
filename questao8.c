#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 50 // define o tamanho do vetor

// Questão 8 da lista

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int A[TAM], aux, i;

  // ler os valores do vetor
  for (i = 0; i < TAM; i++) {
    printf("Digite o %do número: ", i + 1);
    scanf("%d", & A[i]);
  }

  // ordenar o vetor em ordem decrescente
  for (i = 0; i < TAM - 1; i++) {
    for (int j = i + 1; j < TAM; j++) {
      if (A[i] < A[j]) {
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
      }
    }
  }

  // imprimir os dois maiores elementos
  printf("\nO maior elemento é: %d", A[0]);
  printf("\nO segundo maior elemento é: %d", A[1]);

  getch();
  return 0;
}
