// Accept month number and display month name

#include<stdio.h>

int main(){

	int month_num;
	
	printf("Enter month number: ");
	scanf("%d",&month_num);
	
	switch(month_num)
	{
		case 1:
			printf("month name: January\n");
			break;
		case 2:
			printf("month name: February\n");
			break;
		case 3:
			printf("month name: March\n");
			break;
		case 4:
			printf("month name: April\n");
			break;
		case 5:
			printf("month name: May\n");
			break;
		case 6:
			printf("month name: June\n");
			break;
		case 7:
			printf("month name: July\n");
			break;
		case 8:
			printf("month name: August\n");
			break;
		case 9:
			printf("month name: September\n");
			break;
		case 10:
			printf("month name: October\n");
			break;
		case 11:
			printf("month name: November\n");
			break;
		case 12:
			printf("month name: December\n");
			break;
		default:
			printf("Enter valid month name");
	}

	return 0;
}

