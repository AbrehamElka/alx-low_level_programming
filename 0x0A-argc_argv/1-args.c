#include <stdio.h>
/**
* main - the main function.
* @argc: the num of arguments.
* @argv: the arguments.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return(0);
}
