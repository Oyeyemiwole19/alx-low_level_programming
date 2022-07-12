#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- generate a random password
 * Return: 0
 */
int main(void)
{
	int sum;
	char a;

	srand(time(NULL));
	while (sum <= 2645)
	{
		a = rand() % 128;
		sum += a;
		putchar(a);
	}
	putchar(2772 - sum);
	return (0);
}
