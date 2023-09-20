#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: return dest as a string
 */
char *_strcat(char *dest, char src *src)
{
	int lenD, lens, lenT, i, m;


	lenD = 0;
	lens = 0;

	while (*(dest + lenD) != '\0')
	{
		lenD++;
	}

	while (*(src + lenS) != '\0')
	{
		lenS++;
	}
	
	
	lenT = lenD + lenS - 1;
	m = 0;

	i = 0;
	while (i < lenT)
	{
		if (i < lenD)
		{
			*(dest + i) = *(dest + i);
		}
		else
		{
			*(dest + i) = *(src + m);
			m++;
		}

		i++;
	}

	*(dest + lenT) = '\0';
	return (dest);
}
