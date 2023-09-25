#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to string
 * @src: pointer to source
 * @n: third value
 *
 * Return: returns destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]; 
	}
	return (dest);

}
