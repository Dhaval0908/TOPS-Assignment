// Find Area of Cube formula : a = 6a2

#include<stdio.h>

int main(){
	
//	int side,area;
	float side,area;
	
	printf("Enter side value of cube: ");
	scanf("%f",&side);
	
	area = 6 * side * side;
	printf("\nArea of cube is: %.2f",area);
	
	return 0;
}
