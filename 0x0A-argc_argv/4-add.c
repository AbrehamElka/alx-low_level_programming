#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* main - the main function.
* @argc: the num of arguments.
* @argv: the arguments.
* Returns: 0 on success.
*/
int main(int argc, char *argv[])
{
	int i, sum, j;
	char *endptr;

	sum = 0;
	if (argc <= 1)
	{
		printf("0");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		sum = sum + atoi(argv[i], &endptr, 10);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d", sum);
	return (0);
}
