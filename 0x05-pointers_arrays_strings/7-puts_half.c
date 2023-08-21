#include "main.h"

/**
 * puts_half - Prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int a, b, leni;

	leni = 0;

	for (a = 0; str[a] != '\0'; a++)
		leni++;

	b = (leni / 2);

	if ((leni % 2) == 1)
		b = ((leni + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
