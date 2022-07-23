#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints the minimum number
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int value, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	while (value > 0)
	{
		i++;
		if ((value - 25) >= 0)
		{
			value -= 25;
			continue;
		}
		if ((value - 10) >= 0)
		{
			value -= 10;
			continue;
		}
		if ((value - 5) >= 0)
		{
			value -= 5;
			continue;
		}
		if ((value - 2) >= 0)
		{
			value -= 2;
			continue;
		}
		i--;
	}
	printf("%d\n", i);
	return (0);
}
