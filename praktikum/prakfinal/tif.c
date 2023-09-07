#include <stdio.h>
#include <string.h>
#define ll long long
#define gaada printf("Menu does not exist\n");;

typedef struct {
  char item[100];
  ll cost;
  ll stock;
  ll dsc;
  ll tmpdsc;
  ll avail;
} menu ;

menu canteen[1000000];

void input(ll mid){                                                     //biar bisa input 1 line
  ll a = 0, b, c = 0;
  while(1){
    b = getchar();
    if(b == 10){
      if(c == 1) break;
      c++;
    };
    canteen[mid].item[a] = b;
    a++;
  }
}

ll main(){
  char cmnd[1000];
  ll mid, order, cost, balance = 0;
  while(1){
    scanf("%s", cmnd);
    if(strcmp(cmnd, "CLOSE") == 0){                                       //kalo di taro di akhir tle sih s=di judge 
      printf("earnings: Rp%lld\n", balance);
      printf("Informatics canteen is closing... thanks for the visit!");
      break;
    }
    else if(strcmp(cmnd, "ADD") == 0){                                   // add
      scanf("%lld", &mid);
      if(canteen[mid].avail == 1){                                      // kalo dah ada
        printf("Menu is already exist!\n");
        continue;
      }
      input(mid);                                                       // kalo belom ada
      scanf("%lld", &canteen[mid].cost);
      scanf("%lld", &canteen[mid].stock);
      canteen[mid].dsc = 0;
      canteen[mid].avail = 1;
      printf("Menu added\n");
      continue;
    }
    else if(strcmp(cmnd, "REMOVE") == 0){
      scanf("%lld", &mid);
      if(canteen[mid].avail == 0){
        gaada; continue;
      }
      canteen[mid].avail = 0;
      printf("Menu removed\n");
      continue;
    }
    else if(strcmp(cmnd, "INFO") == 0){
      scanf("%lld", &mid);
      if(canteen[mid].avail == 0){
        gaada; continue;
      }
      printf("#%d %s \nPrice : Rp%lld\nStock : %lldx\n\n", mid, canteen[mid].item, canteen[mid].cost, canteen[mid].stock);
      continue;
    }
    else if(strcmp(cmnd, "ORDER") == 0){
      scanf("%lld%lld", &mid,&order);
      if(canteen[mid].avail == 0){
        gaada; continue;
      }
      if(order==0){
        printf("So you want to order or what\n");                           //sounds kinda rude but okay 
        continue;
      }
      if(canteen[mid].stock < order){
        printf("Apologize, the stock is not enough\n");                     //tapi ini sopan wkkwk
        continue;
      }
      cost = order * canteen[mid].cost - (order * canteen[mid].cost * canteen[mid].dsc/100);
      balance += cost;
      printf("Ordered %lldx %s for Rp%lld\n", order, canteen[mid].item, cost);
      canteen[mid].stock-=order;
      continue;

    }
    else if(strcmp(cmnd, "DISC") == 0){
      scanf("%lld%lld", &mid,&canteen[mid].tmpdsc);
      canteen[mid].dsc=canteen[mid].dsc+canteen[mid].tmpdsc;
      if (canteen[mid].dsc>100) canteen[mid].dsc=100;
      if(canteen[mid].avail == 0){
        gaada; continue;
      }
      else if (canteen[mid].avail==1&&canteen[mid].stock>0)
      {
          printf("Discount added\n");
          continue;
      }
      continue;
    }
    printf("Unknown command\n");
  }
}