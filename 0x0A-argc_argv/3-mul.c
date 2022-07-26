#include <stdio.h>
#include <stdlib.h>
/**
 * main - program multiplies two numbers
 * @argc: the number of arguments supplied
 * @argv: the array of pointers
 *
 * Return: if two arguments receive - return 0, else return 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}



