#include "main.h"
#include <stdbool.h>
/**
 * _atoi - returns a number from a string.
 * @s: the string
 *
 * Return: the number in the string or 0
 */
int _atoi(char *s)
{
	signed int num = 0;
	int i = 0;
	int sign =  1;
	bool read = false;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			read = true;
			if (num >= 0)
				num = (num * 10) + (s[i] - '0');
		}
		if (read && (s[i] < '0' || s[i] > '9'))
			break;
		i++;
	}
	return (num * sign);
}
