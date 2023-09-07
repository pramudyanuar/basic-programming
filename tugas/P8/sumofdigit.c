#include <stdio.h> 

int sod(int a) {
  if (a==0) return 0;
  else return a%10 + sod(a/10);
} 

int main() {
  int a;
  scanf("%d", &a);
  printf("%d", sod(a));
}