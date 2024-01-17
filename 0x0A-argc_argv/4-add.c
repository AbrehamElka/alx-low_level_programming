#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* main - the main function.
* @argc: the num of arguments.
* @argv: the arguments.
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc <= 1)
	{
		printf("0");
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
