#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of the times table
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	{
		for (z = 0; z <= n; ++z)
		{
			_putchar(48);
			for (y = 1; y <= n; ++y)
			{
				_putchar(',');
				_putchar(' ');
				x = z * y;
				if (x <= 9)
					_putchar(' ');
				if (x <= 99)
					_putchar(' ');
				if (x >= 100)
				{
					putchar((x / 100 ) + 48);
					_putchar((x / 10) % 10 + 48);
