#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char l;
	int i = 0;

	while (i++ < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);

		_putchar('\n');
	}
}


