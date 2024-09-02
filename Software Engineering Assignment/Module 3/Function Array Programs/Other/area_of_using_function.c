// 	area of function
// 1. rectangle - lenght*width
// 2. square - side*side
// 3. circle - 3.14*r*r
// 4. triangle - 1/2*base*height

#include<stdio.h>

void rectangle(float length, float width);
void square(float side);
void circle(float radius);
void triangle(float base, float height);

int main(){

	float length, width, side, radius, base, height;
	int choice;
	
	printf("Choose from following to find its area:\n");
    printf("1 for rectangle\n");
    printf("2 for square\n");
    printf("3 for circle\n");
    printf("4 for triangle\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    switch(choice)
	{
        case 1:
            printf("Enter length: ");
            scanf("%f",&length);
            printf("Enter width: ");
            scanf("%f",&width);
            rectangle(length, width);
            break;
        case 2:
            printf("Enter side value: ");
            scanf("%f",&side);
            square(side);
            break;
        case 3:
            printf("Enter radius: ");
            scanf("%f",&radius);
            circle(radius);
            break;
        case 4:
            printf("Enter base value: ");
            scanf("%f",&base);
            printf("Enter height value: ");
            scanf("%f",&height);
            triangle(base, height);
            break;
        default:
            printf("Enter valid choice!!\n");
    }

	return 0;
}

	void rectangle(float length, float width)
	{
    	float area = length * width;
    	printf("The area of the rectangle is: %.2f\n", area);
	}

	void square(float side)
	{
    	float area = side * side;
    	printf("The area of the square is: %.2f\n", area);
	}

	void circle(float radius)
	{
    	float area = 3.14 * radius * radius;
    	printf("The area of the circle is: %.2f\n", area);
	}

	void triangle(float base, float height)
	{
    	float area = 0.5 * base * height;
    	printf("The area of the triangle is: %.2f\n", area);
	}

