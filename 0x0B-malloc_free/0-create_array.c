#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char an array is initialized with
 * Return: on Success - a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
