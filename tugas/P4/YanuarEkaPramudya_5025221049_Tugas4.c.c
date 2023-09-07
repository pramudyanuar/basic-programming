#include<stdio.h>
int main(){
	int i = 2, inp;
  	scanf("%d", &inp);
  	if (inp>= 0 && inp <=1000) {
  		while (i <= inp) {                      
		    if (i < 10){
		      if (i < 4){
		        printf("%d ", i);
		      } else {
		        if (i % 2 != 0 && i % 3 != 0){
		            printf("%d ", i);
		        }
		      }
		    } else {
		      if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
		        printf("%d ", i);
		      }
		    }
		    i++;
		  	}	
	  }
}
