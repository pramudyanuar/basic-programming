#include <stdio.h>

int prime(int a){
  int ct = 3,check;
  if (a==1) return 2;
  for (int i = 1; i<a; ct++) {
    check = 1;
    for (int j = 2; j<ct;j++) {
      if (ct%j==0) check=0;
    }
    if (check==1) i++;
  }
  return ct-1;
}

int main() {
  int a;
  while (scanf("%d", &a)!= EOF) {
     printf("%d\n",prime(a));
  }
}