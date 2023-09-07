#include <stdio.h>
typedef unsigned long long ull;
ull rec(ull x, ull y, ull z, ull n) {
	ull res =1;
	if ( x==0 ) return 0;
	if ( x==1 || y==0 ) return 1;
	if ( y==1 || z==0 ) return x%n;
	else {
	if (z > 1) x = rec(x,y,z-1,n);
		while(y) {
			if (y & 1)  res = (x*res)%n;
			x = (x*x)%n;
			y >>=1;
		}
	return res;
	}
}

int main()
{
int a,b,c,d;
scanf("%d %d %d %d", &a,&b,&c,&d);
printf("%llu", rec(a,b,c,d)+1);
return 0;
}

