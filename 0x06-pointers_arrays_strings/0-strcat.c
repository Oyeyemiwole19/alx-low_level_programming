#include "main.h"
/**
 * *_strcat- concatenate two strings
 * @src: source that appends to dest
 * @dest: the string concatenated too.
 * Return: the pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int i = 0;

	while (dest[a])
		i++;
	for (a = 0; src[a]; a++)
		dest[i] = src[a];
	return (dest);
}
