//WAP to perform Palindrome number using for loop and function

#include <stdio.h>

int main() {
    int inputNumber;
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    
    if (pal(inputNumber)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}

int pal (int number) {
    int originalNumber = number;
    int reversedNumber = 0;
    int digit;

  	int temp;
  
    for (temp = number; temp != 0; temp /= 10) 
	{
        digit = temp % 10;
        reversedNumber = reversedNumber * 10 + digit;
    }

    
    return (originalNumber == reversedNumber);
}

