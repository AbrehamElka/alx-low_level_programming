#include "main.h"
#include <stdlib.h>
/**
* _strdup - duplicates a string to an array.
* @str: the string to be duplicated.
*
* Return: char array with value of str.
*/
char *_strdup(char *str)
{
	unsigned int size, i;
	char *s;

	if (str == NULL)
		return (NULL);
	size = 0;
	for ( ; str[size] != '\0'; )
	{
		size++;
	}
	s = malloc((sizeof(char) * size) + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	for ( ; i <= size; )
	{
		s[i] = str[i];
		i++;
	}
	s[size + 1] = '\0';
	return (s);
}
