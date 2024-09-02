/* WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case */

#include<stdio.h>

int main(){

// i. Monday to Sunday using switch case
	int day;
	
	printf("Enter day number: ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("week day: Monday\n");
			break;
		case 2:
			printf("week day: Tuesday\n");
			break;
		case 3:
			printf("week day: Wednesday\n");
			break;
		case 4:
			printf("week day: Thursday\n");
			break;
		case 5:
			printf("week day: Friday\n");
			break;
		case 6:
			printf("week day: Saturday\n");
			break;
		case 7:
			printf("week day: Sunday\n");
			break;
		default:
			printf("Enter valid week number\n");
	}
	
// ii. Vowel or Consonant using switch case
	char ch;
	
	printf("\nEnter a character: ");
    scanf(" %c", &ch);
    
    ch = tolower(ch);
    switch(ch)
	{
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel\n", ch);
            break;
        default:
            printf("%c is a consonant\n", ch);
    }

	return 0;
}

