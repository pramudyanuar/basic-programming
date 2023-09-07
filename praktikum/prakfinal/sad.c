#include <stdio.h>

int main() {
  int a,b,c;
  scanf("%d", &a);
  for (int i=0; i<a; i++) {
    scanf("%d", &b);
    if (b==139) printf ("NO\n");
    else if (b < 139) {
      while (b>0) {
        if (b % 11 == 0) b -= 11;
        else if (b % 15 == 0) b-= 15;
        else b -= 26;
      }
      if (b == 0) printf("YES\n");
      else printf("NO\n");
    }
    else if (b > 139 ) printf ("YES\n");
    }
}
