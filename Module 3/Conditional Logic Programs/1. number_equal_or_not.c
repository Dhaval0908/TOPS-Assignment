// Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>

int main(){

	int num1,num2;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	if(num1==num2)
	{
		printf("Both numbers are equal");
	}
	else
	{
		printf("Both numbers are not equal");
	}

	return 0;
}

