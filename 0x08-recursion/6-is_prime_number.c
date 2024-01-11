#include "main.h"
/**
* prime_recursive - used for checking every number.
* @n: the number to be checked.
* @i: the devider or checker.
*
* Return: 1 if prime or 0 if not.
*/
int prime_recursive(int n, int i)
{
	if (n <= 1)
		return (1);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);

	return (prime_recursive(n, i - 1));
}
/**
* is_prime_number - prime checker.
* @n: the number to br checked.
*
* Return: 1(if prime) or 0 if not.
*/
int is_prime_number(int n)
{
	return (prime_recursive(n, n / 2));
}
