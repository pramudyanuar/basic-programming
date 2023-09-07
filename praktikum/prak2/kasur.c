#include <stdio.h> 
#include <string.h>
int main () {
	char inp[1000];
	int a,b;
	while (scanf("%s", inp) != EOF) {
		a = strlen(inp);
		for (int i = a-1 ; i >= 0; i--) 
		printf("%c",inp[i]);
		printf("\n");
	}
	
	
}
