#include "function_pointers.h"
/**
 * print_name - printe a name
 * @name: the name to be printed
 * *f: A void pointer function
 */
void print_name(char *name; void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
