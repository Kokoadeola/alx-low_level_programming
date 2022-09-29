#include "main.h"

/**
 * compare - compare 2 strings in correct order as well as in reverse order
 * @left: index from left
 * @right: index from right
 *
 * Return: 1 if the same, otherwise 0
 */

int compare(char *left, char *right)
{
	if (left >= right)
		return (1);
	if (*left == *right)
		return (compare(left + 1, right - 1));
	return (0);
}

/**
 * _strlen - finds the length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen(s) + 1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
