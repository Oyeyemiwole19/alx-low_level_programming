#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char- print a char
 * @arg: list of argument
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
 * print_int- print int
 * @arg: list of argument
 */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
}
/**
 * print_float- print float
 * @arg: list of argument
 */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}
/**
 * print_string- prints a string
 * @arg: list of argument
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all- pritns anything, followed by new line
 * @format: argument type
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int index = 0, j = 0;

	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);

	while (format && (*(format + index)))
	{
		j = 0;
		while (j < 4 && (*(format + index) != *(funcs[j].s)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		index++;
	}
	printf("\n");
}
