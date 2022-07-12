#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int len, i, les;
	char temp;

	for (len = 0; s[len] != '\0' len++)
		i = 0;
	les = len / 2;
	while (les--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
