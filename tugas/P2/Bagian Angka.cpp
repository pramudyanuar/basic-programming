#include <stdio.h>

int main()
{
    int num, rat, pul,sat;
    printf("Masukkan Nilai 3 Digit : ");
    scanf("%d", &num);
    
    if (num >99 || num <1000)
	{
    rat = num/100;
    printf("\nNilai Ratusan : %d", rat);
    pul = ((num%100)/10);
    printf("\nNilai Puluhan : %d", pul);
    sat = num%10;
    printf("\nNilai Satuan : %d", sat);
	}
    else {
    	printf ("ERROR INPUT");
	}
}
