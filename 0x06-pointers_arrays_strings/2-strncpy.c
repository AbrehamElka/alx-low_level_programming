#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: pointer to first string
 * @src: pointer to string to be copied
 * @n: number of string to cpy
 * Return: returns the new string
 */
char *_strncpy(char *dest, char *src, int n);
{
	int lenS;

	for (lenS = 0; src[lenS] != '\0'; lenS++)
	{
		if (lenS < n)
		{
			dest[lenS] = src[lenS];
		}
	}

	while (lenS < n)
	{
		dest[lenS++] = '\0';
	}

	return (dest);
}
