#include <stdio.h>
#include <string.h>

int main () {
	char pal[101];
	char *p;
	scanf("%s", pal);

  int i = 0;
	int l = strlen(pal)-1;
  p = pal;
  
  while (l>i) {
    if (*(p+i)!=*(p+l)){
      printf("bukan palindrome"); return 0;
    }
  i++; l--;
  }
  printf("palindrome");
}