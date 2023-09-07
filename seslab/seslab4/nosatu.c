#include <stdio.h>

int tambah(int a, int b, int *c) {
  *c = a+b;
  return c;
}

int main () {
  int a = 1;
  int b = 2;
  int c;
  tambah(a, b, &c);
  printf("%d", c);
}