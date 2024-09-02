// Calculate person’s Annual salary

#include<stdio.h>

int main(){
	
	int salary,annual;
	
	printf("Enter salary amount: ");
	scanf("%d",&salary);
	
	annual = salary * 12;
	printf("Your annual salary: %d",annual);
	
	return 0;
}
