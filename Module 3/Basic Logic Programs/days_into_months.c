// Convert days into months

#include<stdio.h>

int main(){

	int days, months;

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;

    printf("%d days is approximately into %d months\n", days, months);

	return 0;
}
