// Find Area of Triangle formula : A = 1/2 × b × h

#include<stdio.h>

int main(){
	
//	int base,height,area;
	float base,height,area;
	
	printf("Enter base value of triangle: ");
	scanf("%f",&base);
	
	printf("Enter height value of triangle: ");
	scanf("%f",&height);
	
	area = 0.5 * base * height;
	printf("\nArea of triangle is: %.2f",area);
	
	return 0;
}
