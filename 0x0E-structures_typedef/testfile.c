#include "dog.h"
#include <stdlib.h>
/**
*new_dog - function that creates a new dog.
*
*@name: dog name
*@age: dog age
*@owner: dog owner name
*
*Return: pointer to dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int lenName, lenOwner, i;

	doggy = malloc(sizeof(doggy));

	if (!(doggy) || !(name) || !(owner))
	{;
		return (NULL);
	}

	for (lenName = 0; name[lenName]; lenName++)
	{
	}

	for (lenOwner = 0; owner[lenOwner]; lenOwner++)
	{
	}

	snoppdg->name = malloc(lenName + 1);
	snoppdg->owner = malloc(lenOwner + 1);

	if (!(snoppdg->owner) || !(snoppdg->name))
	{
		free(snoppdg->name);
		free(snoppdg->owner);
		free(snoppdg);
		return (NULL);
	}

	for (i = 0; i < lenName; i++)
		snoppdg->name[i] = name[i];
	snoppdg->name[i] = '\0';

	snoppdg->age = age;

	for (i = 0; i < lenOwner; lenOwner++)
		snoppdg->owner[i] = owner[i];
	snoppdg->owner[i] = '\0';

	return (snoppdg);
}
