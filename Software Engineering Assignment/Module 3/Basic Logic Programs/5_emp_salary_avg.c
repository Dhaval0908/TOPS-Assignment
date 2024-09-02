// Accept 5 employees name and salary and count average and total salary

#include<stdio.h>

int main(){
	
	char emp1[50], emp2[50], emp3[50], emp4[50], emp5[50];
    int salary1, salary2, salary3, salary4, salary5;
    int total_salary, average_salary;
    
    printf("Enter name of employee 1: ");
    scanf("%s", emp1);
    printf("Enter salary of employee 1: ");
    scanf("%d", &salary1);

    printf("Enter name of employee 2: ");
    scanf("%s", emp2);
    printf("Enter salary of employee 2: ");
    scanf("%d", &salary2);

    printf("Enter name of employee 3: ");
    scanf("%s", emp3);
    printf("Enter salary of employee 3: ");
    scanf("%d", &salary3);

    printf("Enter name of employee 4: ");
    scanf("%s", emp4);
    printf("Enter salary of employee 4: ");
    scanf("%d", &salary4);

    printf("Enter name of employee 5: ");
    scanf("%s", emp5);
    printf("Enter salary of employee 5: ");
    scanf("%d", &salary5);
    
    total_salary = salary1 + salary2 + salary3 + salary4 + salary5;
    
    average_salary = total_salary / 5;
    
    printf("\nTotal salary of all employees: %d\n", total_salary);
    printf("Average salary of all employees: %d\n", average_salary);

	return 0;
}

