#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int leni = 0;
	int c;

	while (*s != '\0')
	{
		leni++;
		s++;
	}
	s--;
	for (c = leni; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
