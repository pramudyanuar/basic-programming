#include<stdio.h>
#include<math.h>
#define ll long long

int sod(int a) {
  if (a==0) return 0;
  else return a%10 + sod(a/10);
} 

int hari (int n) {
  ll x,y,z;
  for(int i = 0 ; i<10000;i++) {
    x = 2*((pow(10,i+1)-(9*i)-10)/27);
    if (i > 0) if ( sod(x) == n ) printf("%d ", i);
    
  }
}

int main () {
  ll a, b;
  scanf("%ld", &a);
  for (int i=0;i<a;i++) {
    scanf("%d", &b);
    printf("%d", hari(b) );
  }
}