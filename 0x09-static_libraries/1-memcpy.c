#include "main.h"

char *_memcpy(char *dest, char *src, unsigned n)
{
	unsigned i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
