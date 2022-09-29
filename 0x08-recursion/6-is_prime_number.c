#include "main.h"

/**
 * prime_number - find prime number
 * @n: value of integer
 * @fact: factor of n
 *
 * Return: 1 if prime num, otherwise 0
 */

int prime_number(int n, int fact)
{
	if (n == fact)
	{
		return (1);
	}
	else if (n % fact == 0)
	{
		return (0);
	}
	else
		return (prime_number(n, fact + 1));
}


/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 *
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	else
		return (prime_number(n, 2));
}
