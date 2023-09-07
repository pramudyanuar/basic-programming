#include <stdio.h>

int main() {
  int a,b, hasil=1;
  scanf("%d", &a);
  while(a--) {
    scanf("%d", &b);
    hasil*=b;
  }
  printf("%d", hasil);
}