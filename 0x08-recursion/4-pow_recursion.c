#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the pwoer y
 * @x: the manuscript integer
 * @y: the superscript integer
 *
 * Return: if y < 0, return -1
 * if y = 0, return 1
 */

int _pow_recursion(int x, int y)
{

	int result = x;

	if (y < 0)
		return (-1);

	else if  (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
