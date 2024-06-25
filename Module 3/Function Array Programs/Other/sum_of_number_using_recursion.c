// sum of number till 1 using recursion

#include<stdio.h>

int user;
int main(){

	printf("Enter a number: ");
	scanf("%d",&user);
	printf("%d",sum(user));
	return 0;
}

int sum(int n)
{
	if(n>=1)
	{
		return n+sum(n-1);
	}
	else
	{
		return 0;
	}
}

