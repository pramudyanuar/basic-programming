#include <stdio.h>
#include <assert.h>
int main () {
	int m,n,a;
	scanf("%d %d", &m, &n);
	a = m%(n+1);
	assert (m >= 1 && m<=1000000000);
	
		if (a==0) printf("abeng");
		else printf("bahresi");
		
}
