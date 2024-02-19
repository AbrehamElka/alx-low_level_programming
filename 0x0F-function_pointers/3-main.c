#include "3-calc.h"
#include <stdio.h>
/**
* main - gets inputs and do an operation.
* @argc: number of inputs.
* @argv: the inputs.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	function = get_op_func(argv[2]);

	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = function(a, b);
	printf("%d\n", result);
	return (0);
}
