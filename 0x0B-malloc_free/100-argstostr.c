#include "main.h"
#include <stdlib.h>
/**
* argstostr - concats all arguments.
* @ac: num of arguments.
* @av: the arguments.
*
* Return: the concated string.
*/
char *argstostr(int ac, char **av)
{
	int i, j, m, size;
	char *str;
	size = 0;
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
	size++;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			str[m] = av[i][j];
			m++;
		}
		str[m] = '\n';
		m++;
	}
	str[m] = '\0';
	return (str);
}
