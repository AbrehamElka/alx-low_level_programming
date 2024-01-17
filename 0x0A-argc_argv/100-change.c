#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* count - countes the amount of change we can give for num i.
* @i: the coin.
* @div: the change.
* @num: the amount.
* Return: new i on success.
*/
int count(int i, int div, int *num)
{
	int k;

	if (i >= div)
	{
		k = i - (i % div);
		(*num) = *num + (k / div);
		i = (i % div);
	}
	return (i);
}
/**
* main - the main function.
* @argc: the num of arguments.
* @argv: the arguments.
* Return: 0 on succes.
*/
int main(int argc, char *argv[])
{
	int num, i;

	num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0");
		return (0);
	}

	i = count(i, 25, &num);
	i = count(i, 10, &num);
	i = count(i, 5, &num);
	i = count(i, 2, &num);
	i = count(i, 1, &num);
	printf("%d\n", num);
	return (0);
}
