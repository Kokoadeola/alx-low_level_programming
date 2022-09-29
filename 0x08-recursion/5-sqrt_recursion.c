#include "main.h"

/**
 * calc_root - returns the natural square root of a number.
 * @n: input number.
 * @root: iterator.
 *
 * Return: square root or -1.
 */

int calc_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	else if (root * root == n)
	{
		return (root);
	}
	else
		return (calc_root(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value of integer
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (calc_root(n, 0));
}
