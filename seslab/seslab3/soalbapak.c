#include <stdio.h>
int main () {
  int inp,n,k,m,o,p;
  scanf("%d", &inp);
  for (int i = 0; i < inp; i++){
  scanf("%d %d %d", &n, &k, &m);
  printf("%d\n", ((n-m*(k-1))/k));
  }
}