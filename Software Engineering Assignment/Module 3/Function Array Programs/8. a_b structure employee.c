//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address
//and age
//b. Write a program of structure for five employee that
//provides the following information -print and display
//empno, empname, address andage

#include <stdio.h>

// Define the structure
struct Employee {
    int empno;
    char empname[100];
    char address[200];
    int age;
};

int main() 
{
	int i;
    // Declare an array of 5 Employee structures
    struct Employee employees[5];

    // Input details for each employee
    for(i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf(" %[^\n]", employees[i].empname); // to read string with spaces
        printf("Address: ");
        scanf(" %[^\n]", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    // Print the details for each employee
    printf("\nEmployee Details:\n");
    for(i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}

