// Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>

int main(){

	int num,sum,i;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		sum += i;
		i++;
	}
	
	printf("Sum of natural number %d is: %d",num,sum);

	return 0;
}

