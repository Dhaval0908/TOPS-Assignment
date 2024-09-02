// WAP to check whether a number is negative, positive or zero

#include<stdio.h>

int main(){

	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("Given number is positive");
	}
	else if(num<0)
	{
		printf("Given number is negative");
	}
	else
	{
		printf("Choose another number!! coz 0 is neutral number");
	}

	return 0;
}

