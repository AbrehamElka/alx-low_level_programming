#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int i, sum = 0, num = 0;
	char c[] = "Error", *arguments;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			arguments = argv[i];
			while (*arguments != 0)
			{
				if (*arguments < 47 || *arguments > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				arguments++;
			}
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
