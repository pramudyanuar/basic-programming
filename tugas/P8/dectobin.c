#include <stdio.h>

void bin(int b) {
  if (b==0) printf("0");
  else if (b==1) printf("1");
  else if (b/2==0) printf("1");
  else (b/2!=0) printf("0");
} 

int main () {
  int a;
  scanf("%d", &a);
  bin(a);
  printf("%d",bin(a));
}