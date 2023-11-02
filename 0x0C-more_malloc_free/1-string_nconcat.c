#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	char *ptr;
	int i;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = strlen(s2) - n;
	if (i >= 0)
	{
		ptr = (char *) malloc(strlen(s1) + n + 1);
	}
	else
		ptr = (char *) malloc(strlen(s1) + strlen(s2) + 1);
	
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
