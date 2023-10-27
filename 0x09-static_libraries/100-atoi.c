#include "main.h"
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, o = 0, pnt = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pnt *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		o = o + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (o * pnt);
}
