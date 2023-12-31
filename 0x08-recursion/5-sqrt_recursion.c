#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns natural sqrt of a number
 * @n: number
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural
 * sqrt of a number
 * @n: number
 * @i: iterator
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
