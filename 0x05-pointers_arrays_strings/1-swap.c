#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: Takes two pointers to integers as parameters and swaps
 * the values they point to.
 * return: void
 */
void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
