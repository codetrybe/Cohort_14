#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  5  *main- entry point
  6  *Return: always 0
  7  */

int main(int argc ,char* argv[])
{
	int i;
	char password[] = "Cohort 14";
	if (argc < 2 || argc > 2)
	{
		printf("Error! Enter 2 arguments: i.e ./test correctPassword\n");
	}
	
	else if (strcmp(argv[1], password) == 0)
	{
		
			printf("Welcome, Password Success!\nTask passed!!!");
	}
	else
	{
		printf("Password Protected!!!\nPlease enter the correct password in this format: ./test correctPassword \n");
	}
	return (0);
}
