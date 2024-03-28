#include "main.h"
/**
 * more_numbers - prints 0-14 10 times.
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int i, j;
	char c = '0', d = '0';

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				c = '1';
				_putchar(c);
				_putchar(d);
				d =  d + 1;
				continue;
			}
			_putchar(c);
			c = c + 1;
		}
		c = '0';
		d = '0';
		_putchar('\n');
	}
}
