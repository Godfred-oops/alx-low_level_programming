#include "main.h"
#include <stdio.h>
/**
 * _abs - compute absolute value of an integer
 *@r: The integer to be checked
 * Return: Always 0
 */
int _abs(int r)
{
	if (r >= 0)
		putchar(r);

	else
		putchar(-r);
	return (0);
}

