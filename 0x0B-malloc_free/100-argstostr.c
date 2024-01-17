#include "main.h"
#include <stdlib.h>
/**
* counter - num of chars.
* @str: string to be counted.
*
* Return: num of chars.
*/
int counter(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; )
		i++;
	return (i);
}
/**
* argstostr - concats all arguments.
* @ac: num of arguments.
* @av: the arguments.
*
* Return: the concated string.
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, m, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	str = malloc((sizeof(char) * size));
	if (str == NULL)
		return (NULL);
	k = 0;
	m = 0;
	j = 0;
	for ( ; j < size; )
	{
		if (av[k][m] == '\0')
		{
			m = 0;
			k++;
			str[j] = '\n';
		}
		else
		{
			str[j] = av[k][m];
			m++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
