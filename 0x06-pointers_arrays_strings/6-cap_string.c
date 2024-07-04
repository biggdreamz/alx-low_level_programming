#include <stdio.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the string to be capitalized.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;  // Flag to indicate next character should be capitalized

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			if (capitalize_next)
				{
				*ptr = *ptr - 'a' + 'A';
				capitalize_next = 0;
				}
		} else {
			capitalize_next = 0;
			if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' ||
				*ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' ||
				*ptr == '{' || *ptr == '}')
				{
				capitalize_next = 1;
				}
		}
		ptr++;
	}

	return (str);
}
