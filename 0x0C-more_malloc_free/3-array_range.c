#include "main.h"
#include <stdlib.h>
/**
 * *array_range- creeate an arry of integers
 * @min: minimum integers of the array
 * @max: maximum number of the array
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, size = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = size++;
	return (arr);
}
