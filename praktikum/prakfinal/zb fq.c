#include<stdio.h>

long long OP(long long X, long long Y ){
     if(Y == 0){
         return X;
     }
    return OP(Y, X % Y);
}

long long square(long long a, long long b, long long mod){
     if(b == 0) {
         return 1;  
     }

     long long J = square(a, b / 2, mod);
     J = (J * J) % mod;

     if(b & 1){
        J = (a * J )% mod;
    }
    return J;
}

int main()
{

    long long N, K;
    long long result = 0; 
    long long mod = 1000000007;

    scanf("%lld %lld", &N, &K);

    for (int i = 0; i < N;  ++i)
    {
    	 result = (result + square(K, OP(i,N), mod)) % mod;
    }
    result = (result * square(N, mod-2, mod)) % mod;

    printf("%lld", result);
    return 0;
}