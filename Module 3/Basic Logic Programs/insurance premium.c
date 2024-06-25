//  Calculate person’s insurance premium based on salary

#include<stdio.h>

int main(){
	
	float salary,premium;
	
	printf("Enter salary amount: ");
	scanf("%f",&salary);
	
	premium = 0.10 * salary;
	
	printf("Your insurance premium %.2f",premium);
	
	return 0;
}
