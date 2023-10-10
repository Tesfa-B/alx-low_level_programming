#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h>
/**
 * struct dog - Details for  Dog
 * @name: name fot the dog
 * @age:  name for the dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
