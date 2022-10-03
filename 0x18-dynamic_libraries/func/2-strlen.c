#include "main.h"
/**
 * _strlen- get the lenght if a string
 * @s: pointer to the string
 * Return: void
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j])
		j++;
	return (j);
}
