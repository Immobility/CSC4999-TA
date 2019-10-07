#include <stdio.h>
#include <string.h>

char input[800];

int main()
{

	printf("What's the password?\n");
	gets(input);
	passwordchecker();
}

int passwordchecker()
{

	if (strcmp(input,"Q1Password") == 0)
		printf("Correct!");

	else
		printf("Incorrect!");
}
