#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: character to be checked
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int j, n;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (n = size - j; n > 0; n--)
				_putchar(' ');

			for (n = 0; n < j; n++)
				_putchar('#');

			if (j == size)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
