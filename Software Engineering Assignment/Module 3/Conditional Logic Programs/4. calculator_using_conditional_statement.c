/* WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement */

#include<stdio.h>

int main() {
	
	char operator;
	int num1, num2, result;
	
	printf("===== You can perform +, -, *, /, %% =====\n");
	scanf(" %c", &operator);
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	
	if(operator == '+') {
		result = num1 + num2;
		printf("%d + %d = %d", num1, num2, result);
	}
	
	else if(operator == '-') {
		result = num1 - num2;
		printf("%d - %d = %d", num1, num2, result);
	}
	
	else if(operator == '*') {
		result = num1 * num2;
		printf("%d * %d = %d", num1, num2, result);
	}
	
	else if(operator == '/') {
			result = num1 / num2;
			printf("%d / %d = %d", num1, num2, result);
	}
	
	else if(operator == '%') {
			result = num1 % num2;
			printf("%d %% %d = %d", num1, num2, result);
	}
	
	else {
		printf("Error! Invalid operator");
	}

	return 0;
}

