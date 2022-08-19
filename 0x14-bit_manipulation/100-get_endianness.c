#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return:  0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *endian;

	x = 1;
	endian = (char *)&x;
	return (*endian);
}
