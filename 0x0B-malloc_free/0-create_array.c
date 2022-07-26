#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars,
 * and initialises it with a specific char
 * @size: the size of the array
 * @c: a characer to initialised the array
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
