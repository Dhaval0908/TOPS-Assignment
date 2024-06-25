// Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
#include<math.h>

int main(){

	int num,rem,arm,orinum,digit;
	
	printf("Enter a digit: ");
	scanf("%d",&digit);
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	orinum = num;
	
	while(num!=0) 
	{
	rem=num%10;
	arm=arm+pow(rem,digit);
	num=num/10;
	}
	
	if(orinum == arm)
	{
		printf("Given number is armstrong!!");
	}
	else
	{
		printf("Given number is not armstrong!!");
	}

	return 0;
}

