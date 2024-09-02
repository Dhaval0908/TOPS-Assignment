// Simple Calculator

#include<stdio.h>

int main(){
	
	int a,b,add,sub,mul,div,mod;
	
	printf("Enter value of a: ");
	scanf("%d",&a);
	
	printf("Enter value of b: ");
	scanf("%d",&b);
	
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
//	mod = a%b;
	
	printf("\nAddition of a and b is: %d\n",add);
	printf("Subtraction of a and b is: %d\n",sub);
	printf("Multiplication of a and b is: %d\n",mul);
	printf("Division of a and b is: %d\n",div);
//	printf("Modulo of a and b is: %d\n",mod);
	
	return 0;
}
