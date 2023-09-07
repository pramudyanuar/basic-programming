#include<stdio.h>
int main () {
	double t, h;
	scanf("%lf", &t);
	h = (4*t*t)/(t+2)-20;
	printf("Hasil : %lf", h);
}
