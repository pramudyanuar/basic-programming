#include <stdio.h>

int goat(int n, int k)
{
	if (k<n) return k;
  else if (k>n) return k%n;
}

int main () {
  int a,b;
  for (int i = 0; i< 5; i++) {
    scanf("%d %d", &a, &b);
    printf("%d\n", goat(a,b));
  }
}