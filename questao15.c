#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 15 da lista

typedef struct {
  int ano;
  char sexo;
  int procedencia;
}
Acidente;

int main() {
  setlocale(LC_ALL, "portuguese");

  size_t num_acidentes = 0;
  size_t num_mulheres_capital = 0;
  size_t num_motoristas_idosos_interior = 0;
  size_t num_pessoas_jovens = 0;
  int existe_mulher_idosa = 0;

  Acidente acidentes[1000];

  int continuar = 1;
  while (continuar == 1 && num_acidentes < 1000) {
    printf("Digite o ano de nascimento: ");
    scanf("%d", & acidentes[num_acidentes].ano);

    if (acidentes[num_acidentes].ano > 1999) {
      num_pessoas_jovens++;
    }

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", & acidentes[num_acidentes].sexo);

    printf("Digite a procedência (0 - Capital, 1 - Interior, 2 - Outro estado): ");
    scanf("%d", & acidentes[num_acidentes].procedencia);

    if (acidentes[num_acidentes].sexo == 'F' && acidentes[num_acidentes].procedencia == 0) {
      num_mulheres_capital++;
    }

    if (acidentes[num_acidentes].procedencia == 1 && acidentes[num_acidentes].ano < 1960) {
      num_motoristas_idosos_interior++;
    }

    if (acidentes[num_acidentes].sexo == 'F' && acidentes[num_acidentes].ano < 1960) {
      existe_mulher_idosa = 1;
    }

    num_acidentes++;

    printf("Deseja continuar? (1 - sim, 2 - não): ");
    scanf("%d", & continuar);
  }

  float percent_pessoas_jovens = ((float) num_pessoas_jovens / num_acidentes) * 100;
  printf("Porcentagem de pessoas com menos do que 21: %.2f%%\n", percent_pessoas_jovens);
  printf("Quantidade de mulheres da capital: %zu\n", num_mulheres_capital);
  printf("Quantidade de motoristas do interior com mais de 60 anos: %zu\n", num_motoristas_idosos_interior);

  if (existe_mulher_idosa) {
    printf("Existe alguma mulher com mais de 60 anos? Sim\n");
  } else {
    printf("Existe alguma mulher com mais de 60 anos? Não\n");
  }

  return 0;
}
