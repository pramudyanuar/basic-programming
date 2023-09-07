#include <stdio.h>
int main () {
	long a;
	scanf("Jumlah Test Data : %ld",&a);
		if (a%5==1 || a==1) printf("Alpha");
		else if (a%5==2 || a==2) printf("Beta");
		else if (a%5==3 || a==3) printf("Gamma");
		else if (a%5==4 || a==4) printf("Theta");
		else if (a%5==0 || a==5) printf("Epsilon");
}
