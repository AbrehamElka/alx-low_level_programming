#include <stdlib.h>
#include "main.h"
#define NAME __FILE__

/**
* main - gives the name of the file,
*
* Return: 0 on success.
*/
int main(void)
{
	int i, size = (int)sizeof(NAME);

	size = size - 1;
	for (i = 0; i < size; i++)
	{
		_putchar(NAME[i]);
	}
	_putchar('\n');
	return (0);
}
