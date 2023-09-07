#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define ll long long

bool primecheck[100008];
bool prime(int p)
{
    int flag = 1;
    if (p <= 1) {
        flag = 0;
        primecheck[p] = false;
    }
    if (p % 2 == 0 || p % 3 == 0) {
        flag = 0;
        primecheck[p] = false;
    }
    for (int i = 5; i * i <= p; i = i + 6) {
        if (p % i == 0 || p % (i + 2) == 0) {
            flag = 0;
            primecheck[p] = false;
            break;
        }
    }
    if (flag || p <= 3) primecheck[p] = true;
}


int main()
{
    memset(primecheck, false, sizeof(primecheck));
    int inp, totnum, num, flg = 0;
    for (int i = 2; i <= 100000; i++) prime(i);
    scanf("%d", &inp);
    for(int j = 0; j < inp; j++) {
        scanf("%d", &totnum);
        flg = 0;
        for (int k = 0; k < totnum; k++) {
            scanf("%d", &num);
            if (primecheck[num]) {
                flg++;
                printf("%d ", num);
            }
        }
        if (flg == 0) printf("Unable to send Fever Slot Buckle.\n");
        else printf("\n");
    }
}