// take number from user and find even or odd number

#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if (num % 2 == 0)
	{
		printf("Given number is even",num);
	}
	else
	{
		printf("Given number is odd",num);
	}
	
	return 0;
}
