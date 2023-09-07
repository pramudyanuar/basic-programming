#include <stdio.h>

int main(){
    int num;
    int a,b = 0, c;

    while (1) {
    scanf ("%d", &num);
        if (num > b){
          c = 0;
          for (a = 1; a <= num; a += c) {
          printf ("%d ", a);
          c++;
          }
          printf ("\n");
        }
        else {
          break;
        }
    b = num;
    }
}