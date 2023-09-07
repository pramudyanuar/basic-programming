#include <stdio.h>
#include <string.h>

int n;
char temp[21];
char maxval[21];
char input[21];

void sorting(int a, int b)           
{
    int x = 0;
    for (int i = a; i < b; i++) {
        temp[x] = input[i];
        x++;
    }
    for (int i = 0; i < n - 1; i++) {
      for (int j = 1 + i; j < n; j++) {
        if (temp[j] > temp[i]) {
           char p = temp[j];
           temp[j] = temp[i];
           temp[i] = p;
        }
      }
    }
    if (strcmp(temp, maxval) > 0) strcpy(maxval, temp);
}

int main()
{   
    scanf("%s", input);
    scanf("%d", &n);
    for (int i = 0; i < (strlen(input) - n) + 1; i++) sorting(i, n + i);
    printf("%s", maxval);
}