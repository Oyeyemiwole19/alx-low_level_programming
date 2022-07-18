#include "main.h"
/**
 * *_memcpy- copies memory area.
 * @dest: memory location
 * @src: source
 * @n: th length of the source
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		i++;
		dest[i] = src[i];
	}
}
