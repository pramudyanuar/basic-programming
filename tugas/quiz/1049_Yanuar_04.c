#include<stdio.h>

int func(int n, int m) {
    int c;
    if(n%m==0) return n;
    if(n==m+1) return n*m;
    for(c=n+1; c%n!=0 || c%m!=0 ; c++);
    return c;
}

int main() {
    int a,b,c;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==0&&b==0) break;
        if(a>b) c = func(a,b);
        else c = func(b,a);
        printf("%d\n",(c/a) + (c/b));
    }
}