// Find total, per and avg of 3 subject marks

#include<stdio.h>

int main() {
	
	
	int eng,math,sci;
	float percentage, average;
	
	printf("Enter marks of eng:");
	scanf("%d", & eng);
	
	printf("Enter marks of math:");
	scanf("%d", & math);
	
	printf("Enter marks of sci:");
	scanf("%d", & sci);
	
	int total = eng + math + sci;
	printf("Total marks: %d\n", total);
	
	percentage = total/300.0 * 100;
	printf("Percentage is: %.2f\n", percentage);
	
	average = (eng + math + sci) / 3.0;
	printf("Average is: %.2f\n",average);
	
	return 0;
}
