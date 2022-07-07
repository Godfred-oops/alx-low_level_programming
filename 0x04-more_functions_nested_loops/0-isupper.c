#include  "main.h"
#include <stdio.h>
/**
 * main - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 for uppercase, 0 for lowercase
 */

int int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}


