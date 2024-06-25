// Write a C Program to Print the Multiplication Table of N

#include<stdio.h>

int main(){

	int n,i;
	
	printf("Enter a number for which you want table: ");
	scanf("%d",&n);
	
	printf("\nMultiplication table of %d:\n",n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n * i);
	}

	return 0;
}

