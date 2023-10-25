#include "main.h"

/**
 * _memcpy - Entry point
 * function that copies memory area
 * @dest: destination array where content is to be copied
 * @src: source of data to be copied
 * @n: number of bytes to be copied
 * Return: on Success - string to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
