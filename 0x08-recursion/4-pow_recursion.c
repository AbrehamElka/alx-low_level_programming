#include "main.h"
/**
* _pow_recursion - powers x raise to y.
* @x: number to be raised.
* @y: the exponent.
*
* Return: the exponent of a number.
*/
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	else
	{
		i = x * _pow_recursion(x, y - 1);
	}
	return (i);
}
