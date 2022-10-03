#include "main.h"

/**
 * _puts - function that print a string, followed by new line
 * @str: pointer that point the string
 * Return: nothing
 */

int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
