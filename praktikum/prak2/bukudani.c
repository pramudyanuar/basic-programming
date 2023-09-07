#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	long long input; scanf("%lld", &input);
	while(input--){
		long long num; scanf("%lld", &num);
		char ans[10];
		for(int i=0; i < 10; i++){
			ans[i]='A';
			ans[i]+= (num/(long long)pow(26,i))%26;
			printf("%c", ans[i]);
		}
		printf("\n");
	}
	return 0;
}

