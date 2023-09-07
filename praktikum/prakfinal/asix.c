#include<stdio.h>
#include<math.h>
#define ll long long
#define mod 1000000007
int flag =0; 

int sod(int a) {
  if (a==0) return 0;
  else return a%10 + sod(a/10);
} 

int hari (int n) {
  ll x,y,z;
  flag = 0;
  for(int i = 0 ; i<10000;i++) {
    x = ((2*(( ( (ll)pow(10,i+1)%mod ) - 9*i-10 ) % mod)/27)%mod);
    if ( sod(x) == n ) {
      flag++;
      printf("%d ", i);
    }
  }
  if (flag == 0) printf("-1");
}

int main () {
  int a, b;
  scanf("%ld", &a);
  for (int i=0;i<a;i++) {
    scanf("%d", &b);
    hari(b);
    printf("\n");
  }
}