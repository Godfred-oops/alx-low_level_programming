#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: character to be checked
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{

		for (len = n; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}

