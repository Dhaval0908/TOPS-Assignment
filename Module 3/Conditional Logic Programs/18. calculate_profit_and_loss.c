// Write a C program to calculate profit and loss on a transaction

#include<stdio.h>

int main(){

	float cost,selling,profit,loss;

    printf("Enter the cost price: ");
    scanf("%f",&cost);

    printf("Enter the selling price: ");
    scanf("%f",&selling);

    if(selling > cost)
	{
        profit = selling - cost;
        printf("Your profit on a transaction: %.2f\n", profit);
    }
    
	else if (cost > selling)
	{
        loss = cost - selling;
        printf("Your loss on a transaction: %.2f\n", loss);
    }
    
	else
	{
        printf("No profit, no loss\n");
    }

	return 0;
}

