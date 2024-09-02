// WAP to input the week number and print week day //

#include<stdio.h>

int main(){

	int week_num;
	
	printf("Enter week number: ");
	scanf("%d",&week_num);
	
	switch(week_num)
	{
		case 1:
			printf("week day: Monday\n");
			break;
		case 2:
			printf("week day: Tuesday\n");
			break;
		case 3:
			printf("week day: Wednesday\n");
			break;
		case 4:
			printf("week day: Thursday\n");
			break;
		case 5:
			printf("week day: Friday\n");
			break;
		case 6:
			printf("week day: Saturday\n");
			break;
		case 7:
			printf("week day: Sunday\n");
			break;
		default:
			printf("Enter valid week number");
	}

	return 0;
}

