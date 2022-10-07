#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - used to allocate memory
 * @b: size of meomory to be allocated
 *
 * Return: pointer to the allocated memory or 98 if error
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
