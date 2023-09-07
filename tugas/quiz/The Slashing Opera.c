#include<stdio.h>
#include<math.h>

int cut(int n)
{
    if(n<=0) return 0;
    return ceil(log2(n));
}

int main()
{
    int z,n;
    scanf("%d",&z);
    while(z--)
    {
        scanf("%d",&n);
        printf("%d\n",cut(n));
    }
    return 0;
}
