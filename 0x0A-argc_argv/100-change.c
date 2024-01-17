#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - the main function.
* @argc: the num of arguments.
* @argv: the arguments.
* Return: 0 on succes.
*/
int main(int argc, char *argv[])
{
	int num, i, k;

	num = 0;
	i = atoi(argv[1]);
	if (i >= 25)
	{
		k = i - (i % 25);
		num = num + (k / 25);
		i = (i % 25);
	}
	if (i >= 10)
	{
		k = i - (i % 10);
		num = num + (k / 10);
		i = (i % 10);
	}
	if (i >= 5)
	{
		k = i - (i % 5);
		num = num + (k / 5);
		i = (i % 5);
	}
	if (i >= 2)
	{
		k = i - (i % 2);
		num = num + (k / 2);
		i = (i % 2);
	}
	if (i >= 1)
	{
		k = i - (i % 1);
		num = num + (k / 1);
		i = (i % 1);
	}

	printf("%d\n", num);
	return (0);
}
