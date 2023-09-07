#include <stdio.h>

int main()
{
    int inp,i;
    scanf("%d", &inp);
    for (i=2; i<=inp; i++){
        if (i<8)
		{
		if (i==2 || i==3 || i==7) printf("* ");
        else printf("%d ",i);
		}
		else if (i>7) {
			if (i%2!=0 && i%3!=0 && i%7!=0) printf("* ");
        	else printf("%d ",i);
		}
		
    }
}

