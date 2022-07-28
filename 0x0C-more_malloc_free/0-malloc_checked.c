#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked- Allocate memory using malloc
 * @b: number of bytes to be allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
