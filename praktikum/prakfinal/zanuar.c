#include<stdio.h>

// cek fpb
long long gcd(long long x, long long y) {
    if (y==0) {
        return x; }
    return gcd(y, x % y);
}

// pangkat - pangkatan biar ga overfloww
long long bsl(long long a, long long b, long long bagi) {
    if (b==0) {
        return 1; }
    long long c = bsl(a,b/2,bagi);
    c = (c*c) % bagi;
    if (b & 1) {
        c = (a*c) % bagi; }
    return c;
}

int main (){
    long long p,q, counter = 0, bagi= 1000000007;
    scanf("%lld%lld", &p, &q);
    for (int i = 0; i < p; i++) {
        counter = (counter + bsl(q, gcd(i,p),bagi)) % bagi;
    }
    printf("%lld", counter * bsl(p, bagi-2 , bagi) % bagi);
    return 0;
}

