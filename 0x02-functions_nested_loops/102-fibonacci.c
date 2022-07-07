#include <stdio.h>
/**
 * main- prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	long int i, j, k, last;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		last = j + k;
		j = k;
		k = last;
	}
	return (0);
}
