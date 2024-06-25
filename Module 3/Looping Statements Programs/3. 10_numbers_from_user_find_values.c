/* WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers */

#include<stdio.h>

int main(){

	int i,num,even=0,odd=0,evensum,oddsum;
	printf("Enter a number: \n");
	
	for(i=0;i<10;i++)
	{
		printf("number %d: ",i + 1);
		scanf("%d",&num);
		if(num % 2 == 0)
		{
			even++;
			evensum += num;
		}
		else
		{
			odd++;
			oddsum += num;
		}
	}
	printf("Count of even numbers: %d\n",even);
	printf("Count of odd numbers: %d\n",odd);
	printf("Sum of even numbers: %d\n",evensum);
	printf("Sum of odd numbers: %d\n",oddsum);
	
	return 0;
}

