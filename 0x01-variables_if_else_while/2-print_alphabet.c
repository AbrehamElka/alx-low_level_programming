#include <stdio.h>
/**
 * main - It will out put the alphabet in lower case.
 * 
 * Return: 0 on success
 */
int main(void)
{
	char A_z = 'a';
	
	while (A_z <= 'z')
	{
		putchar(A_z);
		A_z++;
	}
	putchar('\n');
	return (0);
}
