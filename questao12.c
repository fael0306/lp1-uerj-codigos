#include <stdio.h>
#include <locale.h>

// Questão 12 (feita por Eric Emanuel e adaptada por mim para evitar certos erros)

int main() {

  setlocale(LC_ALL, "portuguese");

  int u = 0, d = 0, c = 0, m = 0, teste; //valor, unidades, dezenas, centenas, milhares
  float v, tester;
  char * su, * sd, * sc, * sm;

  printf("Digite um número inteiro positivo até 9999: ");
  scanf("%f", & v);

  teste = (int) v;
  tester = v - teste;

  while (v < 0 || v > 9999 || tester != 0) {
    printf("Digite um número INTEIRO POSITIVO ATÉ 9999: ");
    scanf("%f", & v);

    teste = (int) v;
    tester = v - teste;
  }

  if (teste < 10) {
    u = teste;
  } else if (teste < 100) {
    d = teste / 10;
    u = teste % 10;
  } else if (teste < 1000) {
    c = teste / 100;
    d = (teste / 10) % 10;
    u = teste % 10;
  } else {
    m = teste / 1000;
    c = (teste / 100) % 10;
    d = (teste / 10) % 10;
    u = teste % 10;
  }

  //printf("%d %d %d %d\n", m, c, d, u);

  switch (m) {
  case 9:
    sm = "nove mil";
    break;

  case 8:
    sm = "oito mil";
    break;

  case 7:
    sm = "sete mil";
    break;

  case 6:
    sm = "seis mil";
    break;

  case 5:
    sm = "cinco mil";
    break;

  case 4:
    sm = "quatro mil";
    break;

  case 3:
    sm = "três mil";
    break;

  case 2:
    sm = "dois mil";
    break;

  case 1:
    sm = "mil";
    break;
  }

  switch (c) {
  case 9:
    sc = "novecentos";
    break;

  case 8:
    sc = "oitocentos";
    break;

  case 7:
    sc = "setecentos";
    break;

  case 6:
    sc = "seiscentos";
    break;

  case 5:
    sc = "quinhentos";
    break;

  case 4:
    sc = "quatrocentos";
    break;

  case 3:
    sc = "trezentos";
    break;

  case 2:
    sc = "duzentos";
    break;

  case 1:
    if (v > 100) {
      sc = "cento";
    } else {
      sc = "cem";
    }
    break;
  }

  switch (d) {
  case 9:
    sd = "noventa";
    break;

  case 8:
    sd = "oitenta";
    break;

  case 7:
    sd = "setenta";
    break;

  case 6:
    sd = "sessenta";
    break;

  case 5:
    sd = "cinquenta";
    break;

  case 4:
    sd = "quarenta";
    break;

  case 3:
    sd = "trinta";
    break;

  case 2:
    sd = "vinte";
    break;

  case 1:
    if (u == 0) {
      sd = "dez";
    } else if (u == 1) {
      sd = "onze";
    } else if (u == 2) {
      sd = "doze";
    } else if (u == 3) {
      sd = "treze";
    } else if (u == 4) {
      sd = "quatorze";
    } else if (u == 5) {
      sd = "quinze";
    } else if (u == 6) {
      sd = "dezesseis";
    } else if (u == 7) {
      sd = "dezessete";
    } else if (u == 8) {
      sd = "dezoito";
    } else {
      sd = "dezenove";
    }
    break;
  }

  switch (u) {
  case 9:
    su = "nove";
    break;

  case 8:
    su = "oito";
    break;

  case 7:
    su = "sete";
    break;

  case 6:
    su = "seis";
    break;

  case 5:
    su = "cinco";
    break;

  case 4:
    su = "quatro";
    break;

  case 3:
    su = "três";
    break;

  case 2:
    su = "dois";
    break;

  case 1:
    su = "um";
    break;

  default:
    if (teste == 0) {
      su = "zero";
    } else {
      su = "";
    }
  }

  if (m > 0) {
    printf("%s ", sm);
  }

  if (c > 0) {
    printf("%s ", sc);
  }

  if (d > 1) {
    printf("%s", sd);
    if (u > 0) {
      printf(" e %s", su);
    }
  } else if (d == 1) {
    printf("%s", sd);
  } else {
    printf("%s", su);
  }

  printf("\n");

  return 0;

}
