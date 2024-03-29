#include "main.h"
/**
 * _isupper - checkes for a char is upper or not.
 * @c: the char to be checked.
 *
 * Return: 1 if succes and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
