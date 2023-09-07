#include<stdio.h>
#include<string.h>
#define ll long long


int main () {

  ll a, total, spend;
  char hal[6];
  static int poin = 0;
  static ll count = 0;

  scanf("%lld", &total);
  scanf("%lld", &a);

  for (int i =0; i<a; i++) {
    scanf("%s%lld", hal, &spend);
    if (strcmp(hal, "Iya")==0) {
      if (spend <= 100000) poin +=1;
      else if (spend > 100000 && spend <= 500000) poin +=5;
      else if (spend > 500000 && spend <= 10000000) poin +=20;
      else if (spend > 10000000 && spend <= 500000000) poin +=35;
      else if (spend >= 500000000) poin +=50;
    }
    if (strcmp(hal, "Tidak")==0) {
      if (spend <= 100000) poin -=1;
      else if (spend > 100000 && spend <= 500000) poin -=5;
      else if (spend > 500000 && spend <= 10000000) poin -=20;
      else if (spend > 10000000 && spend <= 500000000) poin -=35;
      else if (spend >= 500000000) poin -=50;
    }
  }
  count += spend;
  if (count<total) {
    if (poin>0) printf("Ujana berakhir bahagia.");
    else if (poin==0) printf("Ujana berakhir b aja.");
    else if (poin<0) printf("Ujana tidak berakhir bahagia.");
  }
  else printf("Ujana tidak berakhir bahagia.");
}