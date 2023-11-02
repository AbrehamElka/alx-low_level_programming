#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: the pointer to the memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, i;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = sizeof(s2) - n;
	if (i >= 0)
	{
		ptr = malloc(sizeof(s1) + n);
	}
	else
		ptr = malloc(sizeof(s1) + sizeof(s2));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
