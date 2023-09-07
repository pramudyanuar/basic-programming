#include <stdio.h>

int main () {
	int a;
	scanf("%d",a);
	char arrgen[10]="Genap";
	char arrgan[10]="Ganjil";
	while(1)
	{
		if (a%2==0)printf("%[^\n]", arrgen);
		else printf("%[^\n]", arrgan);
	}
	return 0;

}
