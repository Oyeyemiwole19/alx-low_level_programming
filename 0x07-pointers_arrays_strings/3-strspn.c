#include "main.h"
/**
 * _strspn- length of a prefix substring
 * @s: string to be searched
 * @accept: prefix
 * Return: Length of occurrence.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				c;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
