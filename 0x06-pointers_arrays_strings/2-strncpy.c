#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: pointer to first string
 * @src: pointer to string to be copied
 * @n: number of string to cpy
 *
 * Return: returns the new string
 */
char *_strncpy(char *dest, char *src, int n);
{
	int lenS;

	lenS = 0;

	while (src[lenS] != '\0' && lenS < n)
	{
		dest[lenS] = src[lenS]; 
		lenS++;
	}

	while (lenS < n)
	{
		dest[lenS++] = '\0';
	}
	return (dest);
}
