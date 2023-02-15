#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_ALUNOS 50
#define MAX_NOME 30

// Questão 7 da lista

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int v, i, j;
  float sn = 0, mn;

  struct aluno {
    char nome[MAX_NOME];
    float nota;
  }
  alunoinfo[MAX_ALUNOS], aux;

  // ler informações dos alunos
  for (int t = 0; t < MAX_ALUNOS; t++) {
    printf("Digite o nome: ");
    scanf(" %s", alunoinfo[t].nome);
    printf("Digite a nota: ");
    scanf("%f", & alunoinfo[t].nota);
  }

  // ordenar em ordem decrescente de nota
  for (i = 0; i < MAX_ALUNOS; i++) {
    for (j = i + 1; j < MAX_ALUNOS; j++) {
      if (alunoinfo[j].nota > alunoinfo[i].nota) {
        aux = alunoinfo[i];
        alunoinfo[i] = alunoinfo[j];
        alunoinfo[j] = aux;
      }
    }
  }

  // calcular a média das notas
  for (v = 0; v < MAX_ALUNOS; ++v) {
    sn = sn + alunoinfo[v].nota;
  }

  mn = sn / MAX_ALUNOS;

  // imprimir as cinco maiores notas acima da média
  printf("\n\nAs cinco maiores notas acima da média são:");

  for (v = 0; v < MAX_ALUNOS && v < 5; ++v) {
    if (alunoinfo[v].nota > mn) {
      printf("\nNome: %s", alunoinfo[v].nome);
      printf("\nNota: %.2f", alunoinfo[v].nota);
      printf("\n");
    }
  }

  return 0;
}
