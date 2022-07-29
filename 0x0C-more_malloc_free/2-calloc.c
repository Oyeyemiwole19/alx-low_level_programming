#include "main.h"
#include <stdlib.h>
/**
 * *_calloc- Allocate for memory for an array
 * @nmemb: number of element
 * @size: sixe of the byte
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	p = s;
	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';
	return (s);
}
