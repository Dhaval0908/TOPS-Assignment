// Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>

int main(){

	int num,count=0,evensum=0,oddsum=0;

    printf("Enter 5 numbers:\n");

    while (count<5)
	{
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evensum++;
        } else {
            oddsum++;
        }

        count++;
    }

    printf("Total number of even numbers: %d\n", evensum);
    printf("Total number of odd numbers: %d\n", oddsum);

	return 0;
}
