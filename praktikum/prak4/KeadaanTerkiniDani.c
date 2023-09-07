#include <stdio.h>
#include <string.h>
#define loop(i,h) for(i=0; i<h; i++)
int i,j;
struct list{
	char link[101];
	char ip[101];
};

int main(){
	long long n,m; scanf("%lld%lld", &n,&m);
	struct list a[n];
	loop(i,n){
		scanf("%s%s", a[i].link, a[i].ip);
	}
	loop(i,m){
		char LINK[101], IP[101];
		scanf("%s", LINK);
		loop(j,n){
			if(strcmp(LINK, a[j].link) == 0){
				printf("%s Berhasil Di Blokir\n", a[j].ip);
				break;
			}else if(j==n-1){
				printf("Alamat Tidak Ditemukan..\n");
			}
		}
	}
	return 0;
}
