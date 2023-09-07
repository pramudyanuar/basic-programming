#include<stdio.h>
int main() {
	int number,ratusan,puluhan,satuan,a,b,c,d;
	printf("Masukkan angka : ");
	scanf("%d",&number);
	
	ratusan = number/100;
    puluhan = ((number%100)/10);
    satuan = number%10;
    
    if (number<10){
    	printf("Merupakan Bilangan Amstrong");
	}
	else if (number>9 && number<100){
    	b= puluhan*puluhan;
    	c= satuan*satuan;
    	d=b+c;
    	
    	if (number == d){
    		printf("Merupakan Bilangan Amstrong");
		}
		else{
			printf("Bukan Merupakan Bilangan Amstrong");
		}
	}
	else if (number>99 && number<1000){
		a= ratusan*ratusan*ratusan;
    	b= puluhan*puluhan*puluhan;
    	c= satuan*satuan*satuan;
    	d=a+b+c;
    	
    	if (number == d){
    		printf("Merupakan Bilangan Amstrong");
		}
		else{
			printf("Bukan Merupakan Bilangan Amstrong");
		}
	}
	else {
		printf("Error input");
	}
}
