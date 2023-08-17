#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while ((n % i == 0) && (n != 1))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
