#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a program that allocates memory
 * @b: amount of bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
