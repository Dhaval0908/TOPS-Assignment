// Accept marks from user and check pass or fail

#include<stdio.h>

int main(){

	int marks;
	
	printf("Enter marks: ");
	scanf("%d",&marks);
	
	if(marks>100)
	{
		printf("Enter valid marks!!");
	}
	else if(marks>35)
	{
		printf("Congratulations You passed your exam!!");3
	}
	else
	{
		printf("You failed in your exam!! Better luck next time :)");
	}
	
	return 0;
}

