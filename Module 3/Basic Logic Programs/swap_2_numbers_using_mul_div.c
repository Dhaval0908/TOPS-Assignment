// WAP to calculate swap 2 numbers with using of multiplication and division

#include<stdio.h>

int main(){

	int a,b;
	
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	
	printf("\n-----before-----\n");
	printf("a = %d b = %d",a,b);
	
	a=a*b; 
	b=a/b;
	a=a/b;
	
	printf("\n-----after-----\n");
	printf("a = %d b = %d",a,b);

	return 0;
}

