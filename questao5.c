#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 5 da lista

int main(int argc, char * argv[]) {

  setlocale(LC_ALL, "portuguese");

  int v, m1 = 0, m5 = 0, m10 = 0, m25 = 0, m50 = 0, m100 = 0;
  float vreal;

  printf("Digite o dinheiro: ");
  scanf("%f", & vreal);

  while (vreal > 1 || vreal < 0) {
    printf("Digite um valor em centavos válido: ");
    scanf("%f", & vreal);
  }

  v = vreal * 100;

  if (v == 100) {
    v = v - 100;
    m100++;
  }
  while (v >= 50) {
    v = v - 50;
    m50++;
  }
  while (v >= 25) {
    v = v - 25;
    m25++;
  }
  while (v >= 10) {
    v = v - 10;
    m10++;
  }
  while (v >= 5) {
    v = v - 5;
    m5++;
  }
  while (v > 0) {
    v--;
    m1++;
  }

  printf("\nO troco vai ser dado em: %d moedas de 1 real, %d moedas de 50 centavos, %d moedas de 25 centavos, %d moedas de 10 centavos, %d moedas de 5 centavos, %d moedas de 1 centavo", m100, m50, m25, m10, m5, m1);

  getch();
  return 0;
}
