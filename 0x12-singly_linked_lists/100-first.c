#include <stdio.h>
void funcs(void) __attribute__ ((constructor));
/**
 * funcs- prints a sentence before the main function
 */
void funcs(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
