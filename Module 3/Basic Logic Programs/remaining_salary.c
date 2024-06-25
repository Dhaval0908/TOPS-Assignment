/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary*/

#include<stdio.h>

int main(){
	
	int salary,in_pre,loan,rem_sal;
	
	printf("Enter monthly salary: ");
	scanf("%d",&salary);
	
	in_pre = 0.10 * salary;
	
	loan = 0.10 * salary;
	
	rem_sal = salary - in_pre - loan;
	
	printf("Deduct 10%% insurance premium from salary: %d\n", in_pre);
    printf("Deduct 10%% loan installment from salary: %d\n", loan);
	printf("Remaining salary: %d",rem_sal);



	return 0;
}

