#include "main.h"

/**
 * _memset - fill n byte of memory with a constant value
 * @s: pointer to a memory area
 * @b: constant value
 * @n: number of byte to fill
 *
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
