#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	unsigned int i, k, m;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((strlen(s2) - 1) <= n)
		i = strlen(s2);
	else
		i = n;
	i = i + strlen(s1) + 1;
	str = malloc(i * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (k = 0; k < strlen(s1); k++)
		str[k] = s1[k];

	for (m = 0; (m + k) < i; m++)
		str[k + m] = s2[m];
	str[i] = '\0';
	return (str);
}
