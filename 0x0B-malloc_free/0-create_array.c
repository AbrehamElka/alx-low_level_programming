#include "main.h"
#include <stdlib.h>
/**
* create_array - to creat an array char with values of a char.
* @size: size of the array.
* @c: the char to fill the array.
*
* Return: char array.
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (; i < size;)
	{
		str[i] = c;
		i++;
	}
	s[size] = '\0';
	return (str);
}
