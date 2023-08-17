#include "main.h"

/**
 * print_line - function to draws a straight line
 * @n: number of times the character _ should be printed
 * return: always 0
*/

void print_line(int n)
{

		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
}
