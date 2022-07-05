#include "main.h"
/**
 * _isalpha - checks the alphabetic character
 *@c: to check whether is a letter, lowercae or uppercase
 *
 * Return: 1 for a letter, 0 for otherwise
 */
int _isalpha(int c)
{

	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return (0);
}
