#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int num = 0, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	while (num >= 25)
	{
		num -= 25;
		coins++;
	}
	while (num >= 10)
	{
		num -= 10;
		coins++;
	}
	while (num >= 5)
	{
		num -= 5;
		coins++;
	}
	while (num >= 2)
	{
		num -= 2;
		coins++;
	}
	if (num == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
