#include <stdio.h>

int main () {
  int a,ct = 0;
  scanf("%d", &a);
  int map[a][a];
  for (int i = 0; i<a; i++){
    for (int j = 0; j<a; j++){
      scanf("%d", &map[i][j]);
      if (j==a) scanf("\n");
      if (map[i][j]== 1 ) ct++;
    }
  }
  printf("%d", ct);
}