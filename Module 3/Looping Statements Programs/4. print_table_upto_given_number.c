// WAP to print table up to given numbers

#include<stdio.h>

int main(){

	int number,i;
	
	printf("Enter a number for which you want table: ");
	scanf("%d",&number);
	
	printf("\nMultiplication table of %d:\n",number);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",number,i,number * i);
	}

	return 0;
}

