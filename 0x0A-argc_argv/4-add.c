#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds postivees numbers
 * @argc: number of arguments supplied
 * @argv: array of pointers
 *
 * Return: if no number is passed, return 0
 * if one of the number contains symbols, not digits,
 * return 1
 */

int main(int argc, char *argv[])
{
	int i, digit, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
