#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

// Questão 14

int main(int argc, char * argv[]) {

  int h = 0, m = 0, s = 0;

  while (h < 25) {
    Sleep(1000);
    s += 1;
    if (s == 60) {
      s = 0;
      m += 1;
    }
    if (m == 60) {
      m = 0;
      h += 1;
    }
    if (h == 25) {
      continue;
    }
    char time_str[9];
    sprintf(time_str, "%02d:%02d:%02d", h, m, s);
    printf("\n%s", time_str);
  }

  h = 0;
  m = 0;
  s = 0;
  char time_str[9];
  sprintf(time_str, "%02d:%02d:%02d", h, m, s);
  printf("\n%s", time_str);

  getch();
  return 0;
}
