#include <stdio.h> 
#include <string.h>

typedef struct {
	char id[7];
	char usn[20];
	int win;
	int draw;
	int lose;
	int point;
} database;

int main() {
	int a,b,menang,seri,kalah,poin;
	char usid[7], uname[20];
	scanf("%d", &a);
	database player[a];

	for(int i=0; i<a; i++) {
		scanf("%s %s %d %d %d", usid, uname, &menang, &seri, &kalah);
		poin=(30*menang)+(10*seri)-(20*kalah);
		strcpy(player[i].id, usid);
		strcpy(player[i].usn , uname);
		player[i].win=menang;
		player[i].lose=kalah;
		player[i].draw=seri;
		player[i].point=poin;
	}
	
	for(int i=0; i<a-1; i++) {
		b=i+1;
		for(int k=b; k<a; k++) {
			if(player[i].point < player[k].point) {
				strcpy(usid, player[i].id);
				strcpy(uname, player[i].usn);
				menang = player[i].win;
				kalah = player[i].lose;
				seri = player[i].draw;
				poin = player[i].point;
				strcpy(player[i].id, player[k].id);
				strcpy(player[i].usn, player[k].usn);
				player[i].win = player[k].win;
				player[i].lose = player[k].lose;
				player[i].draw = player[k].draw;
				player[i].point = player[k].point;
				strcpy(player[k].id, usid);
				strcpy(player[k].usn, uname);
				player[k].win = menang;
				player[k].lose = kalah;
				player[k].draw = seri;
				player[k].point = poin;
			}
			if(player[i].point == player[k].point) {
				if (strcmp(player[i].usn, player[k].usn) > 0) {
				strcpy(usid, player[i].id);
				strcpy(uname, player[i].usn);
				menang = player[i].win;
				kalah = player[i].lose;
				seri = player[i].draw;
				poin = player[i].point;
				strcpy(player[i].id, player[k].id);
				strcpy(player[i].usn, player[k].usn);
				player[i].win = player[k].win;
				player[i].lose = player[k].lose;
				player[i].draw = player[k].draw;
				player[i].point = player[k].point;
				strcpy(player[k].id, usid);
				strcpy(player[k].usn, uname);
				player[k].win = menang;
				player[k].lose = kalah;
				player[k].draw = seri;
				player[k].point = poin;
				}
			}
		}
	}
	
	for(int i=0; i<a; i++) {
	printf("%s %s %d %d %d %d\n", player[i].id, player[i].usn, player[i].win, player[i].draw, player[i].lose, player[i].point); }
	return 0;
}
