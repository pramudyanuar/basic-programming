#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    for (int i = 0; i<a; i++){
        scanf("%d",&b);
        c = ceil(log2(b));
        printf("%d\n", c);
    }
}