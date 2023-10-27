#include "main.h"
/**
 * _strstr - locates a substring.
 *@haystack: poiinter to first val
 *@needle: pointer to second val
 *
 * Return: char as a result
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0, n = 0, i = 0, j = 0, k =0, l = 0;
	char *ptr;

	while (needle[count] != '\0')
	{
		count++;
	}

	while (haystack[i] != '\0')
	{
		i++;
	}

	if (count == 0)
	{
		return (haystack);
	}


	while (haystack[j] != '\0')
	{
	
		if (haystack[j] == needle[0])
		{
			ptr = &haystack[j];
			l = j;
			n = 0;
			for (k = 0; k < count; k++)
			{
				if (haystack[l] == needle[k])
					n++;
				l++;
			}
		}
		if (n == count)
			return (ptr);
		j++;
	}
	return ('\0');
}
