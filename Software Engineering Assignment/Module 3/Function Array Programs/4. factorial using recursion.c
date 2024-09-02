//WAP to find factorial using recursion

#include<stdio.h>

int num;

int main()
{
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("factorial of %d numbers is : %d", num , fact(num));
	
	return 0;
}

int fact(int n)
{
	if(n>=1)
	{
		return n*fact(n-1);
	}
	else 
	{
		return 1;
	}
	
}

