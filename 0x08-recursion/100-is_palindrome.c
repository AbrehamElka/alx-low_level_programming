#include "main.c"


/**
 * is_palindrome: check if palindrom.
 * @s: string
 *
 * Return: on success 1.
 */
int is_palindrome(char *s)
{
	int len, left, right;

	len = _strlen_recursion(s);
	left = 0;
	right = len - 1;

	while (left < right)
	{
		if (s[left] != s[right])
		{
			return (0);
		}
		left++;
		right--;
	}

	return (1);
}
