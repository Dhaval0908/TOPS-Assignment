// Convert years into days and months

#include<stdio.h>

int main(){

	int days, months, years;

    printf("Enter number of years: ");
    scanf("%d", &years);

    months = years * 12;
    days = years * 365;

    printf("%d years is approximately into %d months and %d days\n", years, months, days);

	return 0;
}

