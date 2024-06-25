// If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-

#include<stdio.h>

int main(){

	float bill,surcharge,total;
	
	printf("Enter bill amount: ");
	scanf("%f",&bill);
	
	if(bill>800)
	{
		surcharge = 0.18 * bill;
		total = surcharge + bill;
		printf("Total amount of bill with surcharge: Rs.%.2f",total);
	}
	else if(bill<256)
	{
		total = bill;
		printf("Total amount of bill: Rs.%.2f",total);
	}
	else
	{
		printf("Total amount of bill: Rs.%.2f",bill);
	}

	return 0;
}

