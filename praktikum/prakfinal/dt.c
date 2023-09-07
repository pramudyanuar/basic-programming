#include <stdio.h>
#include <stdlib.h>
#define loop(a,b) for(a=0;a<b;a++)
void swap (int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    while(1)
    {
        int a,i,j,p;
        scanf ("%d", &a);
        if (a==0)
            break;
        int ct = 0;
        int glass[a];
        loop(i,a) scanf ("%d", &glass[i]);

        loop (j,a) {
            for(int k=0; k<a-1; k++) {
                if (glass[k+1]<glass[k]) {
                    swap (&glass[k+1], &glass[k]);
                    ct++;
                }
            }
        }
        printf ("Minimal lakukan %d pertukaran\n", ct);
        loop (p,a) {
            if (glass[p]%10==0) printf ("Yeay Lulus dasprog\n");
            else if (glass[p]%5==0) printf ("Lulus\n");
            else if (glass[p]%2==0) printf ("Yeay\n");
            else printf ("%d\n", glass[p]);
        }
    }
}