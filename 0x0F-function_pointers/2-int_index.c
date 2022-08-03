#include "function_pointers.h"
/**
 * int_index- secrhes for integer
 * @array: array of element
 * @size: size of array
 * @cmp: pointers used to compare
 * Return: The indesx first eclemnt cmp does npt return
 * if no elment matches , returns -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		i = 0;
		while (i < size)
		{
			i++;
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
