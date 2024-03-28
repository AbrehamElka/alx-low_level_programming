#include "main.h"
/**
 * _isdigit - checkes if an input is a digit or not.
 * @c: the char to be checked.
 *
 * Return: 1 if success and 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
