#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: Pointer to the buffer to be printed.
 * @size: Number of bytes to print from the buffer.
 *
 * Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0.
 * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
 * Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print '.'.
 * Each line ends with a new line '\n'.
 * If size is 0 or less, the output should be a new line '\n'.
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i;
	int j;
	unsigned char c;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = b[i + j];
				printf("%02x", c);
				if (j % 2 != 0)
					printf(" ");
				else
					printf(" ");
			} else
			{
				printf("  ");
			}
		}

		for (j = 0; j < 10 && i + j < size; j++)
		{
			c = b[i + j];
			if (c >= 32 && c <= 126)
				printf("%c", c);
			else
				printf(".");
		}
		printf("\n");
	}
}