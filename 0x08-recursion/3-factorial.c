#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to be used
 *
 * Return: if n < 0, factorial is -1 (indicating error)
 * if n == 0, factorial is 1
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	else
	{
		result += factorial(n - 1);
	}

	return (result)
}

