// check given number is palindrome or not
// Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>

int main(){

	int num,rem,rev,orinum;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	orinum = num;
	while(num!=0)
	{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	}
	
	if(orinum==rev)
	{
		printf("Given number is palindrome!!");
	}
	else
	{
		printf("Given number is not palindrome!!");
	}

	return 0;
}

