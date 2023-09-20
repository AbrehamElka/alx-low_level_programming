#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: return dest as a string
 */
char *_strcat(char *dest, char src *src)
{
	int lenD, lens, lenT, i;


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
	lenS = 0;

	while (lenD < lenT)
	{
		*(dest + lenD) = *(src + lenS);
		lenD++;
		lenS++;
	}

	*(dest + lenD) = '\0';
	return (dest);
}
