#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM1 40
#define TAM2 60

int main(int argc, char * argv[]) {
  setlocale(LC_ALL, "portuguese");

  const char * nomes1[TAM1] = {
    "Adalberto",
    "Adriano",
    "Bernardo",
    "Bianca",
    "Carla",
    "Carlos",
    "Diego",
    "Diogo",
    "Eduardo",
    "Elvira",
    "Fagundes",
    "Fernandes",
    "Gabriel",
    "Gilberto",
    "Helio",
    "Humberto",
    "Isabel",
    "Isaias",
    "Jonas",
    "Judite",
    "Karla",
    "Kevin",
    "Laercio",
    "Leandro",
    "Marielle",
    "Martins",
    "Natan",
    "Norberto",
    "Osvaldo",
    "Oswaldo",
    "Paloma",
    "Pedro",
    "Quintilo",
    "Quirino",
    "Rafael",
    "Rodrigo",
    "Sabrina",
    "Suelen",
    "Tobias",
    "Tito"
  };
  const char * nomes2[TAM2] = {
    "Abigail",
    "Adalberto",
    "Adriano",
    "Barcelos",
    "Bernardo",
    "Bianca",
    "Carla",
    "Carlos",
    "Cassiano",
    "Dario",
    "Diego",
    "Diogo",
    "Eduardo",
    "Elvira",
    "Everton",
    "Fabio",
    "Fagundes",
    "Fernandes",
    "Gabriel",
    "Gilberto",
    "Giovani",
    "Helio",
    "Holavio",
    "Humberto",
    "Isabel",
    "Isabella",
    "Isaias",
    "Jacob",
    "Jonas",
    "Judite",
    "Karla",
    "Kevin",
    "Kezia",
    "Laercio",
    "Leandro",
    "Leonardo",
    "Maria",
    "Marielle",
    "Martins",
    "Natan",
    "Norberto",
    "Nicole",
    "Olivia",
    "Osvaldo",
    "Oswaldo",
    "Paloma",
    "Paulo",
    "Pedro",
    "Quincas",
    "Quintilo",
    "Quirino",
    "Rafael",
    "Ramon",
    "Rodrigo",
    "Sabrina",
    "Saulo",
    "Suelen",
    "Thomas",
    "Tito",
    "Tobias"
  };

  const char * nomestotal[TAM1];
  int k, j, t = 0;

  for (k = 0; k < TAM1; k++) {
    t = 0;
    for (j = 0; j < TAM2; j++) {
      if (strcmp(nomes1[k], nomes2[j]) == 0) {
        t = 1;
        break;
      }
    }
    if (t == 1) {
      nomestotal[k] = nomes1[k];
    } else {
      nomestotal[k] = NULL;
    }
  }

  printf("Nomes em ambas as listas:\n");
  for (k = 0; k < TAM1; k++) {
    if (nomestotal[k] != NULL) {
      printf("%s\n", nomestotal[k]);
    }
  }

  return 0;
}
