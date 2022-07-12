#include "main.h"
/**
 * swap_int- swap integer value
 * @a: the first integer
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*b = *a - *b;
}
