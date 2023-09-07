#include<stdio.h>

int prime(int x) {
    int b=1;
    if (x == 0 || x == 1) b=0;
    else {
    for (int i = 2; i <= x / 2; i++) {
      if (x % i == 0) {
        b=0;
        break;
      }
    }
  }
  return b;
}

int main() {
  int a,b,c, flag=0;
  scanf("%d", &a);
  for (int i=0; i<a; i++) {
    scanf("%d", &b);
    int angka[b];
    for (int j=0; j<b; j++) {
      scanf("%d", &angka[j]);
      c = prime(angka[j]);
      if (c==1) {
        flag++;
        printf("%d ",angka[j]);
      }
    }
    printf("\n");
    if (flag == 0) printf("Unable to send Fever Slot Buckle.");
    }
}


