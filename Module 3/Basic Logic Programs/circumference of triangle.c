// Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
int main(){
	
	int side1,side2,side3,c;
	
	printf("Enter value of rectangle side1: ");
	scanf("%d",&side1);
	
	printf("Enter value of rectangle side2: ");
	scanf("%d",&side2);
	
	printf("Enter value of rectangle side3: ");
	scanf("%d",&side3);
	
	c = side1 + side2 + side3;
	printf("circumference of triangle: %d",c);
	
	return 0;
}
