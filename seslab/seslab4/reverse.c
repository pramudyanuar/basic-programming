#include <stdio.h>
#include <stdlib.h>

void rev(char *s ) {
	if(s[0]=='\0') return;
	else{rev(&s[1]); putchar(s[0]);}
}

int main () {
  int n;
  scanf("%d\n", &n);
	char sen[n];
	gets(sen); rev(sen);
	printf("\n"); system("pause"); return 0;;
}