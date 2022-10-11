#include "dog.h"
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

	snoppdg.name = tempName;
	snoppdg.age = age;
	snoppdg.owner = tempOwner;

	temp = &snoppdg;
	if (temp == '\0')
		return ('\0');

	return (temp);
}