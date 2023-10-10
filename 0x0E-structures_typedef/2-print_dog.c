#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the information of the dog
 * @struct dog -  a structure that stores information about dog
 * @d: a of dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->age == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s \n", d->name);
	printf("Age: %f \n", d->age);
	printf("Owner: %s \n", d->owner);
}
