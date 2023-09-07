#include <stdio.h>
int main() {

	int inp, cnt, a = 3;
	scanf("%d",&inp);
	if (inp > 1) printf("2");
	
	for (cnt = 2; cnt < inp;)
	{
    	for (cnt = 2; cnt <= a - 1; cnt++) 
		{
      		if (a%2 == 0)
        	break;
    	}
    	if (cnt == a)
    	{
     	printf("\t%d", a);
    	}
    a++;
  }
	}

