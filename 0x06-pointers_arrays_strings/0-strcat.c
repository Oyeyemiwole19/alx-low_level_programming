#include "main.h"
/**
 * *_strcat- concatenate two strings
 * @src: source that appends to dest
 * @dest: the string concatenated too.
 * Return: the pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, index;

	for (index = 0; dest[index] != '\0'; index++)
		do {
			a++;
			dest[index] = src[a];
			index++;
		} while (src[a] != '\0');
	return (dest);
}
