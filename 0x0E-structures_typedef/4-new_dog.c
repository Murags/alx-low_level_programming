#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i, lenName, lenOwner;

	doggy = malloc(sizeof(*doggy));
	if (doggy == NULL || !(name) || !(owner))
	{
		free(doggy);
		return (NULL);
	}

	for (lenName = 0; name[lenName]; lenName++)
		;

	for (lenOwner = 0; owner[lenOwner]; lenOwner++)
		;

	doggy->name = malloc(lenName + 1);
	doggy->owner = malloc(lenOwner + 1);

	if (!(doggy->name) || !(doggy->owner))
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	for (i = 0; i < lenName; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';

	doggy->age = age;

	for (i = 0; i < lenOwner; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = '\0';

	return (doggy);
}
