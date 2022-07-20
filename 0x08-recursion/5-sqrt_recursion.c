#include "main.h"

/**
 * find_sqrt - finds the natural sqaure root of an inputted number
 * @num: the number to find the square root of
 * @root: the root to be tested
 *
 * Return: if the number has a natural square root
 * if the number does not have a natural sqaure root
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural sqaure root of a number
 * @n: integer to be used
 *
 * Return: n does not have a root, return -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}


