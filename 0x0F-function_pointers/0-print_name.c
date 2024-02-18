#include "function_pointers.h"
/**
* print_name - a function to print a name.
* @name: the name of the function.
* @f: the function choosen.
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
