// WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>

int main(){

	int num1,num2,num3,min;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	printf("Enter third number: ");
	scanf("%d",&num3);
	
	min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
	
	printf("Minimum number is: %d\n", min);

	return 0;
}

