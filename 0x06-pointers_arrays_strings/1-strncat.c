#include "main.h"
/**
 * *_strncat- concatenate two strings
 * @dest: pointer destination
 *  @src: the pointer source
 *  @n: number of bytes
 *  Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i = 0;

	while (dest[length++])
		i++;
	for (length = 0; src[length] && length < n; length++)
		dest[i] = src[length];
	return (dest);
