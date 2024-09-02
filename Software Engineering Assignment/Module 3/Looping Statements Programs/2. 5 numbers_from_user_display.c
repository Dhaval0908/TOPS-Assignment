// WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>

int main(){

	int num;
	
	for(num=0;num<=5;num++)
	{
		printf("Enter a number: ");
		scanf("%d",&num);
		printf("Your number: %d\n",num);
	}

	return 0;
}

