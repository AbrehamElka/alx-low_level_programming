#include "main.h"
/**
* factorial - gives the factorial of a number.
* @n: the number to be factorised.
*
* Return: the factorial of a number(int).
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
