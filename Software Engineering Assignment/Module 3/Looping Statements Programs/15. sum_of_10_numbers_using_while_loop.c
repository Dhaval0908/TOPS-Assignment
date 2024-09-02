// Calculate sum of 10 numbers using of while loop

#include<stdio.h>

int main(){

	int num,i=0,sum=0;
	
	printf("Enter 10 numbers and get sum of that numbers:\n");
	
	while(i<10)
	{
		printf("Enter number %d: ",i +1);
		scanf("%d",&num);
		sum += num;
		i++;
	}
	
	printf("Sum of given 10 numbers is: %d",sum);
	
	return 0;
}

