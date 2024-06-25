// Write a C program to check whether a triangle can be formed with the given values for the angles

#include<stdio.h>

int main(){

	int angle1,angle2,angle3;
	
	printf("Enter angle 1: ");
	scanf("%d",&angle1);
	
	printf("Enter angle 2: ");
	scanf("%d",&angle2);
	
	printf("Enter angle 3: ");
	scanf("%d",&angle3);
	
	if(angle1 + angle2 + angle3 == 180 && angle1>0 && angle2>0 && angle3>0)
	{
		printf("Triangle can be formed with the given values for the angles");
	}
	else
	{
		printf("Triangle can not be formed with the given values for the angles");
	}

	return 0;
}

