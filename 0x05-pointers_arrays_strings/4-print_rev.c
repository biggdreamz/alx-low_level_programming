#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
