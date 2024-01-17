#include <stdlib.h>
/**
* main - the main function.
* @argc: num of arguments.
* @argv: the arguments.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <  argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
