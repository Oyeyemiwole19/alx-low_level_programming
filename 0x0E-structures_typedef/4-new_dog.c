#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - new dog
 * @name: the name of the dog
 * @age: The dog age
 * @owner: The dog owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;

	dog_t *doggo;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->name = malloc(i * sizeof(doggo->name));
	if (doggo->name == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		doggo->name[k] = name[k];
	doggo->age = age;
	doggo->owner = malloc(j * sizeof(doggo->owner));
	if (doggo->owner == NULL)
	{
		free(doggo->owner);
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		doggo->owner[k] = owner[k];
	return (doggo);
}
