#include <stdio.h>

int goat(int n, int k)
{
	if (n == 1)
		return 1;
	else
		return (goat(n - 1, k+1) + (k+1) - 1) % n + 1;
}

int main()
{
	int n,m;
	scanf("%d",&m);
	for (int i =0; i<m;i++) {
	scanf("%d", &n);
	printf("%d\n", goat(n,0));
	}
	return 0;
}

