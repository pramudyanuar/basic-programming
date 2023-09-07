#include <stdio.h>
#include <string.h>
#define ll long long

typedef struct
{
  char item[100];
  ll prize;
  ll stock;
  ll disc;
  ll tempdisc;
  ll avail;
} menu ;

menu canteen[1000000];

void input(ll id) {                                                     //biar bisa input 1 line
  ll a = 0, b, c = 0;
  while(1){
    b = getchar();
    if(b == 10){
      if(c == 1) break;
      c++;
    };
    canteen[id].item[a] = b;
    a++;
  }
}

ll main () {
  char inp[51];
  ll mid, order, cost, balance = 0;
  while (1)
  {
    scanf("%s", inp );
    if (strcmp(inp, "CLOSE")==0) {                                      //kalo di taro di akhir tle sih s=di judge 
      printf("earnings: Rp%lld\n", balance);
      printf("Informatics canteen is closing... thanks for the visit!");
      break;
    }
    else if (strcmp(inp, "ADD")==0) {
      scanf("%d", &mid);
      if (canteen[mid].avail==1) {
         printf("Menu is already exist!\n");
         continue;
      }
      input(mid);
      scanf("%lld %lld", &canteen[mid].prize, &canteen[mid].stock);
      canteen[mid].disc = 0;
      canteen[mid].avail = 1;
      printf("Menu added\n");
      continue;
    }

    else if (strcmp(inp, "REMOVE")==0) {
      scanf("%d", &mid);
      if(canteen[mid].avail == 0) {
        printf("Menu does not exist\n");
        continue;
      }
      canteen[mid].avail = 0;
      printf("Menu removed\n");
      continue;
    }

    else if (strcmp(inp, "INFO")==0) {
      scanf("%d", &mid);
      if(canteen[mid].avail == 0) {
        printf("Menu does not exist\n");
        continue;
      }
      printf("#%d %s \nPrice: Rp%lld\nStock: %lldx\n\n", mid, canteen[mid].item, canteen[mid].prize, canteen[mid].avail);
      continue;
    }

    else if (strcmp(inp, "ORDER")==0) {
      scanf("%lld %lld", &mid, &order);
      if(canteen[mid].avail == 0) {
        printf("Menu does not exist\n");
        continue;
      if (order == 0){
        printf("So you want to order or what\n");                           //sounds kinda rude but okay 
        continue;
      }
      if (canteen[mid].avail < order){
        printf("Apologize, the stock is not enough\n");                     //tapi ini sopan wkkwk
        continue;
      }
      cost = order*canteen[mid].prize - ( order*canteen[mid].prize*canteen[mid].disc/100);
      balance += cost;
      printf("Ordered %lldx %s for Rp%lld\n", order, canteen[mid].item, cost);
      canteen[mid].avail -= order;
      continue;
    }
    else if (strcmp(inp, "DISC")==0) {
      scanf("%lld%lld", &mid, &canteen[mid].tempdisc);
      if (canteen[mid].disc > 100) {
        canteen[mid].disc = 100;
      }
      if(canteen[mid].avail == 0) {
        printf("Menu does not exist\n");
        continue;
      }
      else if (canteen[mid].avail ==1 && canteen[mid].avail > 0) {
        printf("Discount added\n");
        continue;
      }
    }
  }
    printf("Unknown command\n");
  } 
}