#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: on success 0 and 1 error
 **/

int main(int argc, char *argv[])
{
	int multiplied = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	multiplied = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", multiplied);
	return (0);
}
