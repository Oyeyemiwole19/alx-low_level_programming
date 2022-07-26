#include "main.h"
#include <stdlib.h>
/**
 * *str_concat- concatenates two strings
 * @s1: The string to be concatenated upon
 * @s2: the srting to be concatenated to s1
 * Return: the string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[index++] = s1[i];
	for (i = 0; s2[i]; i++)
		s[index++] = s2[i];
	return (s);
}
