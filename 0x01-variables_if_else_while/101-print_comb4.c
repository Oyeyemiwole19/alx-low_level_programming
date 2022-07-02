#include <stdio.h>
/**
 * main - main block
 * Description: prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, i, k;

	for (a = '0'; a <= '9'; a++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (a < i && i < k)
				{
					putchar(a);
					putchar(i);
					putchar(k);
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
