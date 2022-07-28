#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat- concatenate string
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int size = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		size++;
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	size = 0;
	for (i = 0; s1[i]; i++)
		s[size++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s[size++] = s2[i];
	s[size] = '\0';
	return (s);
}
