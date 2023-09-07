#include <stdio.h>
#include <string.h>
#define loop(i,h) for(i=0;i<h;i++)
int i,j;

typedef struct{
	char name[1002];
	int pwr;
} ultraman;

int swap(ultraman card[1001], int a, int b){
    ultraman temp;
    temp = card[a];
    card[a] = card[b];
    card[b] = temp;
}

int main(){
	int inp; scanf("%d", &inp);
	ultraman card[inp];
	loop(i,inp){
		scanf("\n%[^\n]", card[i].name);
		scanf("%d", &card[i].pwr);
	}
	char card2[10];
	while(scanf("%s", card2)){
		if(strcmp(card2,"END") == 0){
			return 0;	
		}
		if(strcmp(card2,"SHOW") == 0){
			loop(i,inp){
				printf("%s ", card[i].name);
				printf("%d\n", card[i].pwr);
			}
		}
		if(strcmp(card2,"SWAP") == 0){
			int a,b; scanf("%d%d", &a, &b);
			if(a==b) {
				printf("[Swap on Same Card]\n"); continue;
			}
			if(a>=inp || b>=inp){
				printf("[Out of Bounds]\n"); continue;
			}
			swap(card, a,b);
		}
	}
}
