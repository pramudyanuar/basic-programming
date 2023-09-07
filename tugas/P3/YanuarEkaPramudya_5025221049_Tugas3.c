#include <stdio.h>

int main () {
	int grade;
	scanf("%d", &grade);
	
	if (grade>=0 && grade<=100)
	{
		if (grade>=86){
			printf("A");}
		else if (grade>=80){
			printf("B");}
		else if (grade>=60){
			printf("C");}
		else if (grade>=40){
			printf("D");}
		else{
		printf("E");}
		}
	else {
		printf("Error");
	}
		
	}
