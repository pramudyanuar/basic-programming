#include <stdio.h>

char map[10][10];
int i,j,x,y,f=0;

void rek(int a, int b){
	if(	map[a][b] == '#' || a >= 10 || a < 0 || b >=10 || b < 0 ) return;
	if(map[a][b] == 'M') {
		f = 1; return;
	}
	map[a][b] = '#';
	rek(a+1,b);
	rek(a-1,b);
	rek(a,b+1);
	rek(a,b-1);
}

int main(){
	for(i = 0; i < 10; i++){
		scanf("%s", &map[i]);
		for(j = 0; j < 10; j++){
			if(map[i][j] == 'P') {
				x = i; y = j;
			}
		}
	}
	rek(x,y);
	f == 1? printf("[GURETO DAZE!]") : printf("[YARE YARE DAZE!]");
	return 0;
}
