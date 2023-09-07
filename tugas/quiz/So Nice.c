#include<stdio.h>

int P(int n, int m)
{
    int c;
    if(n%m==0) return n;
    if(n==m+1) return n*m;
    for(c=n+1; c%n!=0 || c%m!=0 ; c++);
    return c;
}

int main()
{
    int n,m,p;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(n==0&&m==0) break;
        if(n>m) p = P(n,m);
        else p = P(m,n);
        printf("%d\n",(p/n) + (p/m));
    }
    return 0;
}
