// WAP to print Fibonacci series up to given numbers

#include<stdio.h>

int main(){

	int i,num,n1=0,n2=1,n3=n1+n2;
	
	printf("Enter number that you want to print fibonacci series: ");
	scanf("%d",&num);
	
	printf("%d,%d,",n1,n2);
	for(i=1;i<=num-2;i++)
	{
		printf("%d,", n3);//1
		n1 = n2;//1
		n2 = n3;//1
		n3 = n1 + n2;//2
	}
	
	return 0;
}

