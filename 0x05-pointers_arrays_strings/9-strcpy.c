#include "main.h"
/**
 * *_strcpy- cpies a string pointed too.
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to by pointer 'src'
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[1] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
