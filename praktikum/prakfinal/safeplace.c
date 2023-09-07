#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nama[50];
    int bom;
}lokasi_bom;

typedef struct{
    char nama[50];
    lokasi_bom *pengawasan;
}servant;


int main ()
{
    int N,i,j; scanf("%d", &N);
    servant pembantu[100];
    lokasi_bom lokasi[100];
    int x = 0, y = 0;
    while(N--){
    	char perintah[5], temp[50];
		scanf("%s%s", perintah, temp);
		if(strcmp(perintah, "set")==0){
			if(strcmp(temp, "*")==0){
				scanf("%s%s", pembantu[x].nama, temp);
				char tnama[50];
				scanf("%s", tnama);
				for(i=0;i<y;i++){
					if(strcmp(lokasi[i].nama, tnama) == 0)
						pembantu[x].pengawasan = &lokasi[i];
				}
				x++;
			}else{
				strcpy(lokasi[y].nama, temp);
				scanf("%lld", &lokasi[y].bom);
				y++;
			}
		}else if(strcmp(perintah, "chg")==0){		//ada 3 jenis
			if(temp[0] == '*'){
				char tnama[50], tlok[50];
				scanf("%s%s", tnama, temp);
				if(strcmp(temp, "&")==0){
					scanf("%s", tlok);
					for(i=0;i<x;i++){
						if(strcmp(tnama, pembantu[i].nama) == 0){
							for(j=0;j<y;j++){
								if(strcmp(tlok, lokasi[j].nama) == 0){
									pembantu[i].pengawasan = &lokasi[j];
									break;
								}
							}
							break;
						}
					}
				}else{
					for(i=0;i<x;i++){
						if(strcmp(tnama, pembantu[i].nama) == 0){
							(*pembantu[i].pengawasan).bom = atoi(temp);
							break;
						}
					}
				}
			}else{
				for(i=0;i<y;i++){
					if(strcmp(temp, lokasi[i].nama) == 0){
						scanf("%d", &lokasi[i].bom);
						break;
					}
				}
			}
		}else{
			char tP[50];
			scanf("%s", tP);
			for(i=0;i<x;i++){
				if(strcmp(pembantu[i].nama, tP) == 0){
					printf("%d\n", (*pembantu[i].pengawasan).bom);
				}
			}
		}

	}
	return 0;
}