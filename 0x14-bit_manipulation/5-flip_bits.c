#include "main.h"
/**
 * flip_bits- returns number of bit needed to be flip
 * @n: number
 * @m: number to be flip to
 * Return: number of fip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit = 0;
	unsigned long int prnumber, xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		prnumber = xor >> i;
		if (prnumber & 1)
			bit++;
	}
	return (bit);
}
