#include <stdio.h>
/**
 * main - It will out put the alphabet in lower case.
 * 
 * Return: 0 on success
 */
int main(void)
{
	char A = 'a';
	while (A <= 'z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
