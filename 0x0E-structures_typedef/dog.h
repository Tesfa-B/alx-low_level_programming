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
/**
 * dog_t - typdef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d)
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
