#include "main.h"
/**
 * puts2 - function that print every other  char starting with 1st char
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int leni = 0;
	int a = 0;
	char *b = str;
	int o;

	while (*b != '\0')
	{
		b++;
		leni++;
	}
	a = leni - 1;
	for (o = 0 ; o <= a ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
