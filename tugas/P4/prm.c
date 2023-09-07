#include <stdio.h>
int main() {
	int input, i, counter, factor=0;
	scanf("%d",&input);

	for(counter= 2; counter < input; counter++)
	{
		for(i=1; i <= counter; i++)
		{
		if (counter%i==0)
			{
			factor++;
			}
		}
	}
	if (factor==2)
		{
		printf("%4d", counter);
		}	
	}
