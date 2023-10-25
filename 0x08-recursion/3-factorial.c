#include "main.h"

/**
 * factorial:  factorial of a given number
 * @n: a number
 *
 * Return: 1 on success
 */
int factorial(int n)
{
	if(n != 0)
	{
		return (n * factorial(n - 1));
	}
	return 1;
}
