#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
/**
 * print_number- prints thr integer
 * @n: the number to be printed
 * Return:void
 */
void print_number(int n)
{
	unsigned int a = 0;

	if  (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
