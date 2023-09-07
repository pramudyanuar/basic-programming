#include <stdio.h>
#include <string.h>
#define loop0(a,b) for(a=0;a<b;a++)
#define loop1(a,b) for(a=1;a<b;a++)
#define ll long long

int maxsumofsubarr(int arrnum[], ll sor)
{
	ll i, arrmax = -2147483647, maxend = 0;
	loop0(i,sor) {
		maxend = maxend +  arrnum[i];
		if (arrmax < maxend) arrmax = maxend;       
		if (maxend < 0) maxend = 0;
	}
	return arrmax;
}

int main()
{
	int inp,i,j; 
  scanf("%d", &inp);
	char player[inp][55];
	ll arr[inp];
	loop0(i,inp){
		ll m;
		scanf("%s %lld", player[i], &m);    //input nama orang
		int a[m];
		loop0(j,m) scanf("%d", &a[j]);      // input angka
    ll temp = maxsumofsubarr(a, m);
		arr[i] = temp;
	}
	ll ans = 0, id=0;
	loop0(i,inp){                         // buat ngurutin bsr ke kecil
		if(ans<arr[i]){
			ans = arr[i];
			id = i;
		}
	}
	printf("%s", player[id]);
	return 0;
}
