#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings- prints strings, followedd by a new line
 * @separator: string to be printed between string
 * @n: numbers string passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *s;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
