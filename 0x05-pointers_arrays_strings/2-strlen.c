#include "main.h"

/**
 * _strlen - returns the string length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int leni = 0;

	while (*s != '\0')
	{
		leni++;
		s++;
	}

	return (leni);
}
