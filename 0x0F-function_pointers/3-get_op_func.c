#include "3-calc.h"
/**
* get_op_func - returns a pointer to the right function.
* @s: the operator to check for
*
* Return: a pointer for the right opraion function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f != NULL)
	{
		if (s[0] == (ops[i].op)[0])
		{
			break;
		}
		i++;
	}

	return (ops[i].f);
}
