#include "3-calc.h"
#include <stdio.h>
/**
* op_add - addes two numbers.
* @a: the first number
* @b: the second number
*
* Return: the sum.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracts two numbers.
* @a: the first number
* @b: the second number
*
* Return: the subtraction.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply two numbers.
* @a: the first number
* @b: the second number
*
* Return: the product.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides two numbers.
* @a: the first number
* @b: the second number
*
* Return: the result.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - gives the remainder of two numbers.
* @a: the first number
* @b: the second number
*
* Return: the reminder.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
