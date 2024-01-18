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
	unsigned int len1, len2, tot, j, k;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen_(s1);
	len2 = strlen_(s2);

	if (n >= len2)
		tot = len1 + len2;
	else
		tot = len1 + n;

	str = malloc(sizeof(char) * tot + 1);
	if (str == NULL)
		return (NULL);

	for (j = 0; j < len1; j++)
		str[j] = s1[j];
	for (k = 0; (j + k) < tot; k++)
		str[j + k] = s2[k];
	str[tot] = '\0';
	return (str);
}
