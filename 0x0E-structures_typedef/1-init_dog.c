#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable
 * @d: pointer to type struct dog
 * @name: pointer ti typoe char; name of dog.
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;
	struct dog *d = &my_dog
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
