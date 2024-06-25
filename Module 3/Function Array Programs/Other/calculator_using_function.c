// calculator
// add, no return no parameter
// sub, no return with parameter
// mul, with return no parameter
// div, with return with parameter
// mod

#include<stdio.h>

int a,b;

//declaration
void add();
void sub();
int mul();
int div();
void mod();

int main(){

	printf("Enter values of A and B in which you want to perform operation:\n\n");
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	
	int choice;
	printf("\nEnter your choice (1 for add, 2 for sub, 3 for mul, 4 for div, 5 for mod): ");
    scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			add();
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul();
			break;
		case 4:
			div(a,b);
			break;
		case 5:
			mod(a,b);
			break;
		default:
			printf("Enter valid choice!!");
	}

	return 0;
}

// definitions
		void add()
		{
			printf("addition of %d and %d is %d",a,b,a+b);
		}

		void sub(int a,int b)
		{
			printf("substraction of %d and %d is %d",a,b,a-b);
		}
		
		int mul()
		{
			printf("multiplication of %d and %d is %d",a,b,a*b);
			return a*b;
		}
		
		int div()
		{
			printf("division of %d and %d is %d",a,b,a/b);
			return a/b;
		}
		
		void mod()
		{
			 printf("Modulo of %d and %d is %d\n", a, b, a % b);
		}
