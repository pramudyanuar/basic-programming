#include<stdio.h>

int prime(int n)
{
    int skrg=3,c,d,cek;
    if(n==1) return 2;
    for(c=1;c<n;skrg++)
    {
        cek = 1;
        for(d=2;d<skrg;d++) if(skrg%d==0) cek = 0;
        if(cek==1) c++;
    }
    return skrg-1;
}

int main()
{
    int n;
    while((scanf("%d",&n)==1))
	 	{
	 		 printf("%d\n",prime(n));
	 		 if(getchar()==EOF) break;
	 	}
    return 0;
}

