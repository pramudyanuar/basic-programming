#include <stdio.h>

int main()
{
    int num, rat, pul,sat;
    printf("Masukkan Nilai 3 Digit : ");
    scanf("%d", &num);
    
    rat = num/100;
    pul = ((num%100)/10);
    sat = num%10;
    
    if (num < 1000) {
	
	    if (rat > 0)
		{printf("\nNilai Ratusan : %d", rat);}
		if (pul >= 0)
		{printf("\nNilai Puluhan : %d", pul);}
		if (sat >= 0) 
		{printf("\nNilai Satuan : %d", sat);}
		
	}
	else {
		printf("Nilai yang anda masukkan tidak dapat diproses");
	}
}
