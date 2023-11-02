#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * function that allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: on Success - A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
