#include <stdio.h>
int main () {
	int mon, year, day;
	int darray[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	puts ("MEMPEROLEH JUMLAH HARI");
	puts ("PADA SUATU BULAN DAN SUATU TAHUN");
	printf("Masukkan Bulan (1-12) :");
	scanf("%d", &mon);
	printf("Masukkan Tahun:");
	scanf("%d", &year);
	
	if (mon==2 && year%4==0)
		day =29;
	else
		day = darray[mon-1];
	printf("\nJumlah hari bulan ke-%d Tahun %d adalah %d hari\n", mon, year, day);

}
