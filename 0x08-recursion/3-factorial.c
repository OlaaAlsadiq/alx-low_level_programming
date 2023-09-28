#include "main.h"

/**
 * factorial - returns the fac of a num
 * @n: number to return the fact from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

