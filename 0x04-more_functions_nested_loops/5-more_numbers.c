#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int a, count;

	for (count = 0, count >= 9, count++)
	{

		for (a = 0; a <= 14; a++)
		{
			if (a >= 9)
				_putchar((a / 10) + '0');
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

