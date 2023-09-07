#include <stdio.h>

int main()
{
    int inp,i;
    scanf("%d", &inp);
    for (i=1; i<=inp; i++){
        if (i%2!=0) printf("%d", i);
        else printf("*");
    }
}

