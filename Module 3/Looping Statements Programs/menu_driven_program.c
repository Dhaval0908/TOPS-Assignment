// Menu driven program

#include<stdio.h>

int main(){

	int choice,qty,bill;
	char cont;
	int pizza=199,burger=79,sandwich=59,pasta=119;
	
	do
	{
	printf("\n-----Menu-----\n");
	printf("1. Pizza - Rs.%d\n",pizza);
	printf("2. Burger - Rs.%d\n",burger);
	printf("3. Sandwich - Rs.%d\n",sandwich);
	printf("4. Pasta - Rs.%d\n",pasta);
	
	printf("Choose your number of item: ");
	scanf("%d",&choice);
	
	
	
	switch(choice)
	{
		case 1:
			printf("You selected Pizza\n");
			break;
		case 2:
			printf("You selected Burger\n");
			break;
		case 3:
			printf("You selected Sandwich\n");
			break;
		case 4:
			printf("You selected Pasta\n");
			break;
		default:
			printf("Enter valid choice!!\n");
	}
	
	if(choice<=4)
	{
		printf("Enter qty: ");
		scanf("%d",&qty);
	}
	
	if(choice==1)
	{
		bill += pizza*qty;
		printf("Your bill amount is: %d\n",bill);
	}
	else if(choice==2)
	{
		bill += burger*qty;
		printf("Your bill amount is: %d\n",bill);
	}
	else if(choice==2)
	{
		bill += sandwich*qty;
		printf("Your bill amount is: %d\n",bill);
	}
	else if(choice==2)
	{
		bill += pasta*qty;
		printf("Your bill amount is: %d\n",bill);
	}
	
	
		printf("\nDo you want to continue? (y/n): ");
    	scanf(" %s", &cont);
	}while(cont == 'y' || cont == 'Y');
	
	
	return 0;
}

