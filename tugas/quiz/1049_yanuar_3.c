#include <stdio.h>

int digit(int n) {
  int ct;
  while (n!=0) {
    n /=10;
    ct++;
  }
  return ct;
}

int main (){
  int a,b=0;
  while (scanf("%d", &a) != EOF ) {
    if (a<b) return 0;
    printf("%d\n", digit(a));
    b = a;
  }
}