// WAP to find the largest of three numbers

#include<stdio.h>

int main(){

	int num1,num2,num3,largest;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	printf("Enter third number: ");
	scanf("%d",&num3);
	
	largest = num1;
	
	if(num2>largest && num2>num3)
	{
		largest = num2;
	}
	else if(num3>largest && num3>num2)
	{
		largest = num3;
	}
	
	printf("Largest number is: %d\n",largest);

	return 0;
}

