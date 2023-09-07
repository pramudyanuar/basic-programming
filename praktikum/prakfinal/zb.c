#include <stdio.h>

long long gcd(long long u , long long v){
    if(v==0){
        return u ;
    }
    return gcd(v,u%v) ;
}

long long powmod(long long a,  long long b , long long mod){
    if(b==0){
        return 1 ;
    }
    long long x = powmod(a,b/2,mod);
    x = (x*x)%mod ;
    if(b&1){
        x = (a*x)%mod ;
    }
    return x;
}

int main(){
    long long N , K ;
    scanf("%lld%lld",&N,&K);
    long long fans = 0 ;
    long long mod = 1000000007;
    for(int i = 0 ; i < N ; ++i){
        fans = (fans + powmod(K,gcd(i,N),mod))%mod ;
    }
    fans = (fans*powmod(N,mod-2,mod))%mod;
    printf("%lld",fans) ;
    return 0 ;

}