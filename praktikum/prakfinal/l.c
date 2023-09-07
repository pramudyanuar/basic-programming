#include <stdio.h>
#include <string.h>

int main () {
  int a,ct = 0;
  scanf("%d", &a);
  char map[a][a];
  for (int i = 0; i<a; i++){
    for (int j = 0; j<a; j++){
      scanf("%c", &map[i][j]);
      if (j==a) scanf("\n");
      if (map[i][j] == '.' ) ct++;
    }
  }
  printf("%d", ct);
}
