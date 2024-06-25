/* Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :

20. Unit                                     21. Charge/unit
22. upto 350                                 23. @1.20
24. 350 and above but less than 600          25. @1.50
26. 600 and above but less than 800          27. @1.80
28. 800 and above                            29. @2.00 */

#include<stdio.h>

int main(){

	int id,unit;
	char name[50],choice;
	float charge;
	
	printf("Enter customer id: ");
	scanf("%d",&id);
	
	printf("Enter customer name: ");
	scanf("%s",&name);
	
	printf("Enter unit consumed: ");
	scanf("%d",&unit);
	
	printf("\ncustomer id: %d\n",id);
	printf("customer name: %s\n",name);
	
	if(unit<350)
	{
		charge = 1.20 * unit;
		printf("total amount to be paid to the customer: %.2f\n",charge);
	}
	
	else if(unit>=350 && unit<600)
	{
		charge = 1.50 * unit;
		printf("total amount to be paid to the customer: %.2f\n",charge);
	}
	
	else if(unit>=600 && unit<800)
	{
		charge = 1.80 * unit;
		printf("total amount to be paid to the customer: %.2f\n",charge);
	}
	
	else if(unit>=800)
	{
		charge = 2.00 * unit;
		printf("total amount to be paid to the customer: %.2f\n",charge);
	}
	
//	do
//	{
//	printf("\nEnter customer id: ");
//	scanf("%d",&id);
//	
//	printf("Enter customer name: ");
//	scanf("%s",&name);
//	
//	printf("Enter unit consumed: ");
//	scanf("%d",&unit);
//	
//	printf("\ncustomer id: %d\n",id);
//	printf("customer name: %s\n",name);
//	
//	if(unit<350)
//	{
//		charge = 1.20 * unit;
//		printf("total amount to be paid to the customer: %.2f\n",charge);
//	}
//	
//	else if(unit>=350 && unit<600)
//	{
//		charge = 1.50 * unit;
//		printf("total amount to be paid to the customer: %.2f\n",charge);
//	}
//	
//	else if(unit>=600 && unit<800)
//	{
//		charge = 1.80 * unit;
//		printf("total amount to be paid to the customer: %.2f\n",charge);
//	}
//	
//	else if(unit>=800)
//	{
//		charge = 2.00 * unit;
//		printf("total amount to be paid to the customer: %.2f\n",charge);
//	}
//	
//	printf("\nDo you want to enter another customer? (y/n): ");
//    scanf(" %c", &choice);
//	
//	}
//	while(choice == 'y' || choice == 'Y');
	
	return 0;
}
