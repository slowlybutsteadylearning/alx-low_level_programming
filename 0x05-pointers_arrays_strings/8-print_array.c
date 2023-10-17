#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * function that prints elements of an array of integers
 * @a: parameter of array
 * @n: number of element of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
