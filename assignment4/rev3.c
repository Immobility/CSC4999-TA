#include <stdio.h>

char in;
unsigned int input = 0;

int main()
{
	printf("What number am I thinking of?\n");
	scanf("%d", &input);
	numCheck();
}

int numCheck()
{
	input += 15;
	input = input / 2;
	input -= 10;
	input = input << 1;

	if (input == 844)
		printf("Correct!");

	else
		printf("Wrong!");
}
