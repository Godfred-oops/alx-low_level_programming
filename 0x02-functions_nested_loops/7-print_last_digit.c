#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @b: the number to be checked
 *
 * Return: Always 0
 */
int print_last_digit(int b)
{
	int last_digit = b % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');

	return (0);
}

