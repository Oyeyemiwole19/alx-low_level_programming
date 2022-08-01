#include "dog.h"
#include <stdlib>
/**
 * free_dog- free dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
