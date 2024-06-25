// Find Area of Square formula : a = a2

#include<stdio.h>

int main(){
	
//	int side,area;
	float side,area;
	
	printf("Enter side value of square: ");
	scanf("%f",&side);
	
	area = side * side;
	printf("\nArea of square is: %.2f",area);
	
	return 0;
}
