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
	int i, j, k, m;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		i = i + counter(av[i]);
	}
	str = malloc(((sizeof(char) * i) + ac) + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	m = 0;
	j = 0;
	for ( ; j < (i + ac); )
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
