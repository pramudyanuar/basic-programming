#include <stdio.h>
#include <math.h>
#define ull unsigned long long
int main () {
  ull inp, a,b,n,m,ta,tb,t, hasil;
  scanf("%lli", &inp);
  for (int i = 0; i<inp; i++) {
    scanf("%lli %lli %lli %lli", &a, &b, &n, &m);
    for (int j=0; j<n; j++)
      {
         ta = pow(a,j);
         tb = pow(j,b);
         t = (t + (ta * tb));
      }
      hasil = t % m;   
      printf("%d \n", hasil );
  }
   return 0; 

}