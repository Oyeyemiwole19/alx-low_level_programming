#include "function_pointers.h"
/**
 * array_iterator- execute a function given as a parameter
 * @array: array of numbers
 * @size: size of the array
 * @action: pointer to the fuction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
