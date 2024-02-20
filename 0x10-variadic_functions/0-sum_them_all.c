#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - gives the sum of numbers.
* @n: the number of inputs.
*
*
* Return: the sum.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int total, i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		total += total + va_arg(args, int);
	}
	va_end(args);

	return (total);
}
