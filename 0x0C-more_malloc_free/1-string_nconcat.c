#include "main.h"
#include <stdlib.h>
/**
* strlen_ - gives the length of string.
* @str: the string to be measured.
* Return: len of str.
*/
unsigned int strlen_(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; )
		i++;
	return (i);
}
/**
* string_nconcat - concats two strings to n bytes.
* @s1: the first string.
* @s2: second string.
* @n: number of bytes from s2.
*
* Return: the newly concated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
