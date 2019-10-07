#include <stdio.h>

char input[];

int main()
{
	printf("Whats the password?\n");
	fgets(input, 80, stdin);
	passwordcheck();

}

int passwordcheck()
{
	if (input[0] == 72)
	{
		if (input[1] == 101)
		{
			if (input[2] == 108)
			{
				if (input[3] == 108)
				{
					if (input[4] == 111)
						printf("Correct!");
					else
						printf("Incorrect!");
				}
				else
					printf("Incorrect!");
			}
			else
				printf("Incorrect!");
		}
		else
			printf("Incorrect!");
	}	
	else
		printf("Incorrect!");
}
