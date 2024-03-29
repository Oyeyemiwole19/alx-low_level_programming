#include "main.h"
/**
 * binary_to_uint- conerts a binary number to unsinged int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bin = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		bin = 2 * bin + (b[i] - '0');
	}
	return (bin);
}
