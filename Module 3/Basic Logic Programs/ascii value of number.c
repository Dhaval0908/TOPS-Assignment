// Find ascii value of given number

#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	char c = (char) n;
	printf("\nThe ascii value of given number %d is: %d",n,c);
	
	return 0;
}

