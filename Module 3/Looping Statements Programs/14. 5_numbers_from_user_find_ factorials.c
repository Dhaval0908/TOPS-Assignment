// Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>

int main(){

	int num,i,fact,j;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter number: ");
		scanf("%d",&num);
		
		fact = 1;
		
		for(j=1;j<=num;j++)
		{
			fact = fact * j;
		}
		
		printf("Factorial of %d is: %d\n\n",num,fact);
	}
	
	return 0;
}

