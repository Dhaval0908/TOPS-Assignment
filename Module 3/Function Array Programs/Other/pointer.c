// pointer is used to find memory address of variable

#include<stdio.h>

int main(){

	int a=5;
	int b=10;
	int i;
	
	int *ptr=&a;
	int *ptr2=&b;
	
	printf("Value of a is %d",a);
	printf("\nMemory location of a variable is %p with pointer",ptr);
	printf("\nMemory location of a variable is %p with address of",&a);
	printf("\nMemory location of b variable is %p with address of",ptr2);
	
	int arr[]={3,5,8};
	//pointer with array
	for(i=0;i<3;i++)
	{
		printf("\n%d is index %d is value %p is memory address",i,arr[i],&arr[i]);
	}
	
	//address of pointer variable
	int **pptr=&ptr;
	printf("%p",pptr);

	return 0;
}

