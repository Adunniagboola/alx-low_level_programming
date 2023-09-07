#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function that allocate memory using malloc
 * @b: number of bytes to allocates
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
