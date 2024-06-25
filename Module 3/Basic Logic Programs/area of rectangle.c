// Find Area of Rectangle formula : A=wl

#include<stdio.h>

int main(){
	
//	int side,area;
	float width,lenght,area;
	
	printf("Enter width value of rectangle: ");
	scanf("%f",&width);
	
	printf("Enter lenght value of rectangle: ");
	scanf("%f",&lenght);
	
	area = width * lenght;
	printf("\nArea of rectangle is: %.2f",area);
	
	return 0;
}
