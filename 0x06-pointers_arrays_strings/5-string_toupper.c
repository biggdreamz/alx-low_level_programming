#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Converts a string to uppercase.
 * @str: Pointer to the string to be converted.
 *
 * Return: Pointer to the converted string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
