#include <stdio.h>

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description: If the number of characters is odd, the function
 * should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, n;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2 + 1;
	}

	for (i = n; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}