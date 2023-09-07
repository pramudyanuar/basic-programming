#include<stdio.h>

int scan(int n)
{
    int c,d,phn,ttl=0;
    for(c=0;c<n;c++) 
	for(d=0;d<n;d++)
    {
        scanf("%d",&phn);
        if(phn==1) ttl++;
    }
    return ttl;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",scan(n));
    return 0;
}
