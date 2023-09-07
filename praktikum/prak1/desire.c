#include <stdio.h>
int main () {
	long x1,y1,x2,y2,x3,y3,cx,cy,m1,m2;
	scanf("[%ld,%ld] | [%ld,%ld] | [%ld,%ld]", &x1, &y1, &x2, &y2, &x3, &y3);
	cx=(x1+x2+x3)/3;
	cy=(y1+y2+y3)/3;
	
	if ((x1,y1)==(x2,y2)==(x3,y3)) {
		printf ("Henshin! Entry.");
	}
	else if ((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)){
		if (cx%2==1 && cy%2==1) printf("Boost Raise Buckle AcquirDed at Coordinate [%ld,%ld] \nHenshin! Boost, Ready, Fight!", cx,cy);
		else printf ("Henshin! Entry.");
	}
	else {
		if (cx%2==0 && cy%2==0) printf("Magnum Raise Buckle Acquired at Coordinate [%ld,%ld] \nHenshin! Magnum, Ready, Fight!", cx,cy); 
		else printf ("Henshin! Entry.");
	}
}

