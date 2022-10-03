#include "main.h"
/**
 * _atoi- convert a string to an integer
 * @s: the string to be converted.
 * Return: value of the converted string
 */
int _atoi(char *s)
{
	int lis = 1;
	unsigned int a = 0;

	do {
		if (*s == '-')
			lis *= -1;
		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');
		else if (a > 0)
			break;
	} while (*s++);

	return (a * lis);
}
