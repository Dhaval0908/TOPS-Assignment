// Write a program in C to read any Month Number in integer and display the number of days for this month

#include<stdio.h>

int main(){

	int month,days;
	
	printf("Enter number of month: ");
	scanf("%d",&month);
	
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		printf("The number of days for this month: 31 days");
	}
	
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		printf("The number of days for this month: 30 days");
	}
	
	else if(month == 2)
	{
		printf("The number of days for this month: 28 or 29 days (leap year)");
	}
	
	return 0;
}
