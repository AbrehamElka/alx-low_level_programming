#include "variadic_functions.h"
/**
* print_numbers - prints numbers by separators.
* @separator: the separator used.
* @n: the amount of numbers.
*
* Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	va_start(args, n);

	for (i = 0; i < (int)n;)
	{
		printf("%d", va_arg(args, int));
		i++;
		if (!(separator) || i == (int)n)
		{
			break;
		}
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
