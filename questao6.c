#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

// Questão 6 da lista

#define DECIMAL_PLACES 2

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int num_abastecimentos, i;
  float distancia, quantidade_gasolina, preco, km_por_litro, distancia_total = 0, quantidade_total = 0, custo_total = 0, custo_por_km;

  printf("Digite o número de abastecimentos feitos (incluindo o primeiro e o último): ");
  scanf(" %d", & num_abastecimentos);

  for (i = 1; i <= num_abastecimentos; i++) {
    printf("\n\nDistância percorrida até a %dª parada: ", i);
    scanf(" %f", & distancia);

    if (distancia <= 0) {
      printf("Valor inválido para distância.\n");
      return 1;
    }

    printf("Quantidade de gasolina comprada na parada %d (em litros): ", i);
    scanf(" %f", & quantidade_gasolina);

    if (quantidade_gasolina <= 0) {
      printf("Valor inválido para quantidade de gasolina.\n");
      return 1;
    }

    printf("Preço pago pela gasolina: ");
    scanf(" %f", & preco);

    if (preco <= 0) {
      printf("Valor inválido para preço.\n");
      return 1;
    }

    km_por_litro = distancia / quantidade_gasolina;
    printf("Km/L na parada %d = %.*f\n", i, DECIMAL_PLACES, km_por_litro);

    distancia_total += distancia;
    quantidade_total += quantidade_gasolina;
    custo_total += preco * quantidade_gasolina;
  }

  custo_por_km = custo_total / distancia_total;

  printf("\n\nKm/L durante toda a viagem é: %.*f", DECIMAL_PLACES, distancia_total / quantidade_total);
  printf("\nO custo do combustível por km rodado é: %.*f", DECIMAL_PLACES, custo_por_km);

  getch();
  return 0;
}
