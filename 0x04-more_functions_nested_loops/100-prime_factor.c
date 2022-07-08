#include <stdio.h>
/**
 * main-  prints the largest prime factor
 * Return: 0 Always
 */
int main(void)
{
	long int a = 612852475143;
	long int p;

	for (p = 2; p < a; p++)
	{
		if (a % p == 0)
		{
			a = a / p;
		}
	}
	printf("%ld\n", p);
	return (0);
}
