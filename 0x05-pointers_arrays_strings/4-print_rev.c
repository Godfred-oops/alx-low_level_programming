#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: an input string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;
	len -= 1;

	while (len != -1)
	{
		_putchar(s[len]);
		len -= 1;
	}
	_putchar('\n');
}

