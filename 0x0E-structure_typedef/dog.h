#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - type structure stores name,age,owner of dog
 * @name: name of the dog
 * @age: age
 * @owner: name the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
