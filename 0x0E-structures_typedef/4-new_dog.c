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
	dog_t snoppdg, *temp;
	char *tempName = name, *tempOwner = owner;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	snoppdg.name = tempName;
	snoppdg.age = age;
	snoppdg.owner = tempOwner;

	temp = &snoppdg;
	if (temp == NULL)
		return (NULL);

	return (temp);
}
