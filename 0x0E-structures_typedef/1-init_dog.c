#include "dog.h"
/**
 *init_dog- function that points to a struct
 *@d: pointer to struct
 *@name: member1
 *@age: member2
 *@owner: member3
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
