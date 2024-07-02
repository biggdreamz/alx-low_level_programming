#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements of the array to be printed.
 *
 * Description: Numbers must be separated by a comma, followed by a space.
 * The numbers should be displayed in the same order as they are stored in the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
