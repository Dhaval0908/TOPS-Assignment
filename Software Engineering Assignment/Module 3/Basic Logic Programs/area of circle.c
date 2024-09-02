// Find Area And Circumference of Circle

#include<stdio.h>

int main(){
	
	float area,r,PI;
	
	printf("Enter value: ");
	scanf("%f",&r);
	
	PI = 3.14159;
	area = PI * r * r;
	
	printf("\nArea of circle: %.2f",area);
	
	return 0;
}
