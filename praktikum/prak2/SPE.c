#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char inp[1000001];
	scanf("%s",inp);
	int toalf[14],num[9];
	memset(toalf,0,sizeof(toalf));
	memset(num,0,sizeof(num));
	int i,l=strlen(inp);
	for(i=0;i<l;i++){
		if(inp[i]=='e') toalf[0]++;
		if(inp[i]=='f') toalf[1]++;
		if(inp[i]=='g') toalf[2]++;
		if(inp[i]=='h') toalf[3]++;
		if(inp[i]=='i') toalf[4]++;
		if(inp[i]=='n') toalf[5]++;
		if(inp[i]=='o') toalf[6]++;
		if(inp[i]=='r') toalf[7]++;
		if(inp[i]=='s') toalf[8]++;
		if(inp[i]=='t') toalf[9]++;
		if(inp[i]=='u') toalf[10]++;
		if(inp[i]=='v') toalf[11]++;
		if(inp[i]=='w') toalf[12]++;
		if(inp[i]=='x') toalf[13]++;
	}
	
		i=2;			//eight
			num[7]+=toalf[i];
			toalf[0]-=toalf[i];
			toalf[3]-=toalf[i];
			toalf[4]-=toalf[i];
			toalf[9]-=toalf[i];
			toalf[i]=0;
		i=10;			//four
			num[3]+=toalf[i];
			toalf[1]-=toalf[i];
			toalf[6]-=toalf[i];
			toalf[7]-=toalf[i];
			toalf[i]=0;
		i=12;			//two
			num[1]+=toalf[i];
			toalf[9]-=toalf[i];
			toalf[6]-=toalf[i];
			toalf[i]=0;
		i=13;			//six
			num[5]+=toalf[i];
			toalf[8]-=toalf[i];
			toalf[4]-=toalf[i];
			toalf[i]=0;
		i=8;			//seven
			num[6]+=toalf[i];
			toalf[0]-=toalf[i];
			toalf[0]-=toalf[i];
			toalf[11]-=toalf[i];
			toalf[5]-=toalf[i];
			toalf[i]=0;
		i=6;			//one
			num[0]+=toalf[i];
			toalf[5]-=toalf[i];
			toalf[0]-=toalf[i];
			toalf[i]=0;
		i=3;			//three
			num[2]+=toalf[i];
			toalf[0]-=toalf[i];
			toalf[0]-=toalf[i];
			toalf[7]-=toalf[i];
			toalf[9]-=toalf[i];
			toalf[i]=0;
		i=1;			//five
			num[4]+=toalf[i];
			toalf[4]-=toalf[i];
			toalf[11]-=toalf[i];
			toalf[0]-=toalf[i];
			toalf[i]=0;
		i=4;			//nine
			num[8]+=toalf[4];
			toalf[5]-=toalf[4];
			toalf[5]-=toalf[4];
			toalf[0]-=toalf[4];
			toalf[4]=0;
	int j;
	for(i=8;i>=0;i--){
		while(num[i]>0){
			printf("%d",i+1);
			num[i]--;
		}
	}
	return 0;
}

