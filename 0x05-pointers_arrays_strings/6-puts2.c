#include "main.h"
/**
 * puts- prints character of a string
 * @str: the string pointer
 * Return: 0
 */
void puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[i]);
		}
		j++;
	}
	_putchar('\n');
}
