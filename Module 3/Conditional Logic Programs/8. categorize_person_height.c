// WAP to accept the height of a person in centimeters and categorize the person according to their height

#include<stdio.h>

int main(){

	float height;
	
	printf("Enter height of person: ");
	scanf("%f",&height);
	
	if(height<150)
	{
		printf("Person is short\nTip: Drink complan daily two times :)\n");
	}
	else if(height>=150 && height<180)
	{
		printf("Person is of average height\n");
	}
	else
	{
		printf("Person is tall\n");
	}
	

	return 0;
}

