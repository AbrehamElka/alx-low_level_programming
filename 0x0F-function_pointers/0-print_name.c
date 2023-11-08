#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: the name
 * @f: function pointer
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
