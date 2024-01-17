#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* main - the main function.
* @argc: the num of arguments.
* @argv: the arguments.
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));


	return (0);
}
