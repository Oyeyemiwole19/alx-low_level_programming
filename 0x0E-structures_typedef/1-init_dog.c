#include "dog.h"
#include <stdlib.h>
/**
 * init_dog- initialize the variable type struct dog
 * @d: The dog to be initialize
 * @name: The name of the dog
 * @age: The dog age
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
