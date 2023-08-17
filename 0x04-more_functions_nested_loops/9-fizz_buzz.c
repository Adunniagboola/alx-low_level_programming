#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * Fizz for multiples of three
 * Buzz for the multiples of five
 * FizzBuzz for multiples of three and five
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
