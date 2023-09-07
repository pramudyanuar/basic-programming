#include <stdio.h>
#include <string.h>
#define ll long long

char flag[32];

ll basecheck(ll number, int ct)
{
    char answer;
    int dev;
    dev = number % 2;
    if (number == 0) return 0;
    else answer = '0' + dev;
    number /= 2;
    basecheck(number, ct + 1);
    flag[ct] = answer;
    return 0;
}

int main()
{
    ll inp, num, chginto, origin;
    char counter = '0';
    scanf("%lld %lld", &inp, &num);
    while (inp--)
    {   
        memset(flag,'0',sizeof(flag));
        scanf("%lld %lld", &chginto, &origin);
        chginto--;
        if (chginto >= 0) num ^= 1 << chginto;
        basecheck(num ^ origin, 0);
        ll total = 0;
        for (int i = 0; i < strlen(flag); i++)
        {
            if (flag[i] == '1' && flag[i] != counter) total++;
            counter = flag[i];
        }
        num = origin;
        printf("%lld\n", total);
    }
}