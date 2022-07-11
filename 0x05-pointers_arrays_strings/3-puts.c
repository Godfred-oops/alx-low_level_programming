#include "main.h"

/**
 * _puts - prints a string followed by new line
 *@str: string to be checked
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*str)
		_putchar(*str++);

	_putchar('\n');

}


