#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: Pointer to the buffer where the string will be copied.
 * @src: Pointer to the source string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';  /* Add the null byte at the end */

	return dest;
}
