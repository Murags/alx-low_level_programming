#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_dog - function that prints a struct dog
*
*@d: dog struct to print
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");

		printf("Name: %s\n", d->name);

		printf("Age: (nil)\n");

		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");

		printf("Owner: %s\n", d->owner);
	}
}
