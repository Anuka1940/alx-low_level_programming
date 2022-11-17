#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog- function that points to a struct
 *@d: pointer to elements of a struct
 *
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}

	else
	{
		printf("Name: %s\n", "(nil)");
	}
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: %s\n", "(nil)");
	}
}
