// Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>

int main(){
	
	int students,total_apples;
	
	printf("Enter number of students: ");
	scanf("%d",&students);
	
	total_apples = students * 5;
	printf("\nNumber of apples required: %d",total_apples);
	
	return 0;
}
