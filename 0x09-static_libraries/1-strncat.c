#include "main.h"
/**
 * _strncat - concats strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: size of second string to concat
 * Return: the new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenD, lenS;

	lenD = 0;
	lenS = 0;

	while (*(dest + lenD) != '\0')
		lenD++;

	while (*(src + lenS) != '\0' && lenS < n)
	{
		*(dest + lenD) = *(src + lenS);
		lenD++;
		lenS++;
	}
	*(dest + lenD) = '\0';
	return (dest);
}
