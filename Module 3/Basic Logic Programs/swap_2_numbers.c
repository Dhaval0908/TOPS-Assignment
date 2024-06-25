/* Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable */

#include<stdio.h>

int main(){

	int a,b,c;
	
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);

// with using 3rd variable

	printf("\nwith using 3rd variable\n");
	printf("\n-----before-----\n");
	printf("a = %d b = %d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\n-----after-----\n");
	printf("a = %d b = %d",a,b);
	
// without using 3rd variable

	printf("\n\nwithout using 3rd variable\n");
	printf("\n-----before-----\n");
	printf("a = %d b = %d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n-----after-----\n");
	printf("a = %d b = %d",a,b);

	return 0;
}

