#include "main.h"
/**
* create_array - to creat an array char with values of a char.
* @size: size of the array.
* @c: the char to fill the array.
*
* Return: char array.
*/
char *create_array(unsigned int size, char c)
{
	if (size == NULL)
	{
		return (NULL);
	}
	char *str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		str[i] = c;
	}
	s[size] = '\0';
	return (str);
}
