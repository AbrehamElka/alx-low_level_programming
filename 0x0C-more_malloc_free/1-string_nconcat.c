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
	unsigned int i, k, m, len1, len2;
	char *str;

	len1 = strlen_(s1);
	len2 = strlen_(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (len2 <= n)
		i = len2;
	else
		i = n;
	i = i + len1 + 1;
	str = malloc(i * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		str[k] = s1[k];

	for (m = 0; (m + k) < i; m++)
		str[k + m] = s2[m];
	str[i] = '\0';
	return (str);
}
