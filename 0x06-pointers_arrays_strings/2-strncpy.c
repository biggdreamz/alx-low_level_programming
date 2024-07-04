#include <stdio.h>
#include "main.h"

/* Prototype of the _strncpy function */
/**
 * _strncpy - Copies up to n characters from the source string
 *            to the destination string.
 * @dest: Pointer to the destination string buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied from src.
 *
 * Return: Pointer to the destination string `dest`.
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
