#include "main.c"



/**
 * _strlen- Returns Length of String
 * @s: string
 *
 * Return: on success 1
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	return (0);
}

/**
 * is_palindrome: check if palindrom.
 * @s: string
 *
 * Return: on success 1.
 */
int is_palindrome(char *s)
{
	int len, left, right;

	len = _strlen(s);
	left = 0;
	right = len - 1;

	while (left < right)
	{
		if ((s + left)* != (s + right)*)
		{
			return (0);
		}
		left++;
		right--;
	}

	return (1);
}
