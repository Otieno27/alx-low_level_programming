#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to be input
 *
 * Return: if n > 0, factorial of n if n < 0, 1 to indicate error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
