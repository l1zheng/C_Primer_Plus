#include <stdio.h>

int main(void)
{
	int input = 0;
	char output = 0;

	puts("Please enter a number.");
	while(scanf("%d", &input) != 0)
	{
		output = input;
		printf("The ASCII of %d is %c.\n",input, output);
	}

	return 0;
}
