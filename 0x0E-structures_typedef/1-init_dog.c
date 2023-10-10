#include "dog.h"
/**
 * init_dog - intialize for dog elements
 * @name: nameof the dog
 * @d: name of structure
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		NULL;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
