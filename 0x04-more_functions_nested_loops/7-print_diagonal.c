#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: character to be checked
 *
 * Return: Alays 0
 */

void print_diagonal(int n)
{
	int len, s;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (s = len; s < len; s++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;
			_putchar('\n');
		}
	}
}
