#ifndef _DOG_H_
#define _DOG_H_

/**
 * DOG_T - using the typedef function to define struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - structure that stores information about dog
 * @name - name of dog
 * @age - The age of the dog
 * @owner - dog's owner
 * Description: A structure names dog, structure stores name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog dog_t, char *name, float age, char *owner);
void print_dog(struct dog dog_t);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t);

#endif
