#include <stdio.h>

typedef struct
{
    char name[101];
    int lat;
    int lon;
} locate ;

int prime(int x) {
    int b=1;
    if (x == 0 || x == 1) b=0;
    else {
    for (int i = 2; i <= x / 2; i++) {
      if (x % i == 0) {
        b=0;
        break;
      }
    }
  }
  return b;
}

int main () {
    int a,b,c,d;
    scanf("%d %d\n", &a, &b);
    locate lokasi[a];
    for ( int i =0; i<a; i++) {
        scanf("%s %dN %dE", lokasi[i].name, &lokasi[i].lat, &lokasi[i].lon);
    }
    for (int i =0; i<b; i++){
    char cari[101];
    scanf("%s", cari);
        for (int i = 0; i<a; i++ ) {
            if (strcmp(cari ,lokasi[i].name) == 0) {
                c = prime(lokasi[i].lat);
                d = prime(lokasi[i].lon);
                if (c==1 && d ==1 ) {
                printf("%s aman! Bangunlah Kesatria!\n", lokasi[i].name);
                break; }
                else if (c==0 || d ==0) {
                printf("%s tidak aman! Ini pasti ulah Gorgom!\n", lokasi[i].name);
                break; }
            }
            else if (i == a-1 ) printf("Tempat apa itu? Kotaro tidak tahu!\n");
        }
    }
}