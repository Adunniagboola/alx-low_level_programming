#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}
		if (j == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
