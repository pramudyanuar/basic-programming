#include<stdio.h>
int main(){
  int a,b;
  scanf("%d", &a);
  for (int i=0; i<a; i++) {
    scanf("%d", &b);
    if (b%2==0) printf("%d\n", 2*b-1);
    else printf("%d\n", 2*b+1);
  }
}