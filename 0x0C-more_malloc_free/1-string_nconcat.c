#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of s2 to be used
 *
 * Return: newly allocated space in memory or NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int ls1, ls2, lmem, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lmem = ls1 + n;

	mem = malloc(lmem + 1);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < lmem; i++)
		if (i < ls1)
			mem[i] = s1[i];
		else
			mem[i] = s2[i - ls1];
	mem[i] = '\0';
	return (mem);
}
