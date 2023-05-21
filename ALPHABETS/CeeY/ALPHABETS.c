#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 *this program prints upper or lower case
 *main- entry point
 *Return: zero
 */


void print_alphabets()
{
	char ans[4];
	printf("Do you want to see a list of the Alphabets?\n(Enter Yes or No)\n");
	scanf(" %s", ans);

	if (strcmp(ans, "y") == 0 ||strcmp(ans, "yes") == 0 || strcmp(ans , "YES")== 0)
	{
		char ansTwo;
		printf("Do you want to print upper or lower? (u/l): ");
		scanf(" %c", &ansTwo);

		char start, end;
		printf("Enter the starting alphabet: ");
		scanf(" %c", &start);
		printf("Enter the ending alphabet: ");
		scanf(" %c", &end);

		if (ansTwo == 'u'|| ansTwo == 'U')
		{
			printf("Uppercase alphabets from %c to %c: ", start, end);
			for (char i = start; i <= end; i++)
			{
				printf("%c ",toupper(i));
			}
			printf("\n");
		}
		else if (ansTwo == 'l'|| ansTwo == 'L')
		{
			printf("Lowercase alphabets from %c to %c: ", start, end);
			for (char i = start; i <= end; i++)
			{
				printf("%c ", tolower(i));
			}
			printf("\n");
		}
		else
		{
			printf("Invalid choice!\n");
			return;
		}
	}
	else
	{
		printf("Okay, Bye!\n");
	}
}

int main()
{
	print_alphabets();
	return 0;
}

