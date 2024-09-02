//WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>

int main() {
    char str[100], revstr[100];
    int length = 0;
    int i, j, pal = 1;

    printf("Enter a string: ");
    scanf("%s", &str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        length++;
    }
    // Reverse the string
    for (i = 0, j = length - 1; i < length; i++, j--) 
	{
        revstr[i] = str[j];
    }
    revstr[length] = '\0';

    for (i = 0; i < length; i++) 
	{
        if (str[i] != revstr[i]) 
		{
            pal = 0;
        }
    }

    printf("Reversed string: %s\n", revstr);
    if (pal) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
