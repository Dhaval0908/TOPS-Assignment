// WAP to find number is even or odd using ternary operator

#include<stdio.h>

int main(){

	int num;
	
	printf("Enter a number: ");
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("%d is even number\n", num) : printf("%d is odd number\n", num);

	return 0;
}

