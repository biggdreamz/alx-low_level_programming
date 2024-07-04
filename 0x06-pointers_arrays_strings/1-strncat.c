#include <stdio.h>
#include "main.h"

/* Prototype of the _strncat function */
/**
 * _strncat - Concatenates up to n characters from the source string
 *            to the destination string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be appended from src.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, const char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
	