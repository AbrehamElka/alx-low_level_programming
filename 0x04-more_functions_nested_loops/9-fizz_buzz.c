#include <stdio.h>
/**
 * main - the start of the function.
 *
 * Return: 1 on success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
			printf(" ");
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

	}
	printf("\n");
	return (0);
}
