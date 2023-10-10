#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the information of the dog
 * @struct dog -  a structure that stores information about dog
 * @d: a of dog structure
 */
void print_dog(struct dog *d)
{
	if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	if (d->owner == 0)
	{
		printf("Owner(nil)");
	}
	if (d->name == 0)
	{
		printf("Name: (nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
