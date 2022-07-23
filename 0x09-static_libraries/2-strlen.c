#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of string
 * @s: the string to be checked
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
