#include <stdio.h>
int main()  
{   
    char opr; 
    int num1, num2, res;
	float a,b; 
    
    printf("--------------------------------------------------------\n");
	printf("[---+---]    SIMPLE CALCULATOR PROGRAM IN C    [---+---]\n");
	printf("[---+---]   YANUAR EKA PRAMUDYA - 5025221049   [---+---]\n");
	printf("--------------------------------------------------------\n");
	
	printf("\nThis Calculator is supported this following operator : ");
	printf("\n1. Addition (+)");
	printf("\n2. Subtraction (-)");
	printf("\n3. Multiplication (*)");
	printf("\n4. Division (/)");
	printf("\n5. Modulo (%%)");
	
    printf ("\n\nSelect your operator (+, -, *, /, %%) : ");  
    scanf ("%c", &opr);
      
    if (opr == '+')  
    {  
    	printf ("\nEnter your first number: ");  
    	scanf(" %d", &num1); 
    	printf ("Enter your second number: ");  
    	scanf (" %d", &num2);
        res = num1 + num2;
        printf ("\nThe Addition of %d and %d is: %d", num1, num2, res);  
    }  
      
    else if (opr == '-')  
    {  
    	printf ("\nEnter your first number: ");  
    	scanf(" %d", &num1); 
    	printf ("Enter your second number: ");  
    	scanf (" %d", &num2);
        res = num1 - num2; 
        printf ("\nThe Subtraction of %d and %d is: %d", num1, num2, res);  
    }  
      
    else if (opr == '*')  
    {  
        printf ("\nEnter your first number: ");  
    	scanf(" %d", &num1); 
    	printf ("Enter your second number: ");  
    	scanf (" %d", &num2);
		res = num1 * num2;  
        printf ("\nThe Multiplication of %d and %d is: %d", num1, num2, res);  
    }  
      
    else if (opr == '/')  
    {  
    	printf ("\nEnter your first number: ");  
    	scanf(" %f", &a); 
    	printf ("Enter your second number: ");  
    	scanf (" %f", &b);
        if (b == 0)  
        {  
            printf (" \nThe Divisor cannot be zero. Please enter another number ");  
            scanf ("%f", &b);        
        }  
        float res = a/b; 
        printf ("\nThe Division of %f and %f is : %.5f ", a, b, res);
    }
    else if (opr == '%')
	{
		printf ("\nEnter your first number: ");  
    	scanf(" %d", &num1); 
    	printf ("Enter your second number: ");  
    	scanf (" %d", &num2);
    	res = num1 % num2;  
        printf ("\nThe Modulo of %d and %d is: %d", num1, num2, res); 
	}
    else  
    {  
        printf(" \n ERROR! \n You have entered wrong inputs ");  
    }  
    return 0;  
}  
