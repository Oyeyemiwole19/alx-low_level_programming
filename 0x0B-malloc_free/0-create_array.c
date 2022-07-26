#include "main.h"
#include <stdlib.h>
/**
 * *create_array- creates an array of chars.
 * @size: number elements array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *) malloc(size * sizeof(c));
	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*(arr + i) = c;
			i++;
		}
		return (arr);
	}
}
