#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
	long long nop, st, hel, tot=0, i;
	char input[1000] = " ";
	char d[2] = ".";
	char *pl, *name, *stats, *health;
	
	scanf("%ld", &nop);
	for ( i = 0; i<nop; i++ ) {	
	scanf("%s[^\n\r]", input);
	
	pl = strtok(input, d);
  	name = strtok(NULL, d);
  	stats = strtok(NULL, d);
  	health = strtok(NULL, d); 
	
	st = atol(stats);
	hel = atol(health);
	
	if (st%5==0) {
		printf("%s %ld\n", name, hel);
	}
	else continue;
	tot += hel;
	
	}
	printf("\nTOTAL SCORE: %ld", tot);
}
