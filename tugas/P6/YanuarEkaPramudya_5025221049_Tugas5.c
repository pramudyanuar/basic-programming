#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
	long day1, day2, m1, m2, year1, year2, dbi1, dbi2, leap, tod1, tod2, diff;
	char mon1[101], mon2[101];
	char mon[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %s %d", &day1, mon1, &year1);
	scanf("%d %s %d", &day2, mon2, &year2);
	
	if(strcmp("Januari", mon1) == 0) m1 = 0;
	if(strcmp("Februari", mon1) == 0) m1 = 1;
	if(strcmp("Maret", mon1) == 0) m1 = 2;
	if(strcmp("April", mon1) == 0) m1 = 3;
	if(strcmp("Mei", mon1) == 0) m1 = 4;
	if(strcmp("Juni", mon1) == 0) m1 = 5;
	if(strcmp("Juli", mon1) == 0) m1 = 6;
	if(strcmp("Agustus", mon1) == 0) m1 = 7;
	if(strcmp("September", mon1) == 0) m1 = 8;
	if(strcmp("Oktober", mon1) == 0) m1 = 9;
	if(strcmp("November", mon1) == 0) m1 = 10;
	if(strcmp("Desember", mon1) == 0) m1 = 11;
	
	if(strcmp("Januari", mon2) == 0) m2 = 0;
	if(strcmp("Februari", mon2) == 0) m2 = 1;
	if(strcmp("Maret", mon2) == 0) m2 = 2;
	if(strcmp("April", mon2) == 0) m2 = 3;
	if(strcmp("Mei", mon2) == 0) m2 = 4;
	if(strcmp("Juni", mon2) == 0) m2 = 5;
	if(strcmp("Juli", mon2) == 0) m2 = 6;
	if(strcmp("Agustus", mon2) == 0) m2 = 7;
	if(strcmp("September", mon2) == 0) m2 = 8;
	if(strcmp("Oktober", mon2) == 0) m2 = 9;
	if(strcmp("November", mon2) == 0) m2 = 10;
	if(strcmp("Desember", mon2) == 0) m2 = 11;
	
	for(int i =0; i < m1; i++) {
		dbi1 = dbi1 + mon[i];
	}
	for(int i =0; i < m2; i++) {
		dbi2 = dbi2 + mon[i];
	}
	
	if (year1>year2) {
		for (int i = year1 ; i > year2; i--) {
		if (i%4==0) leap = leap + 1;
		else continue;
		}}	
	else if (year2>year1){
		for (int i = year2 ; i > year1; i--) {
		if (i%4==0) leap = leap + 1;
		else continue;
		}}
	
	if (dbi1,dbi2>79) leap = leap+1;
	
	tod1 = ((365*(year1)) + dbi1 + day1);
	tod2 = ((365*(year2)) + dbi2 + day2);
	diff = (abs(tod1-tod2)+leap)%10;
	
	if (diff == 1 || diff == 0) printf("Calon K\n");
	else if (diff == 2 || diff == 5) printf("Calon P\n");
	else printf("Manusia Biasa\n");
	
	return 0;
}
