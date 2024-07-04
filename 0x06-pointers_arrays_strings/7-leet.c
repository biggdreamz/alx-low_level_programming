#include <stdio.h>
#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak) format.
 * @str: Pointer to the string to be encoded.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_map[256] = {0};

	leet_map['a'] = '4';
	leet_map['A'] = '4';
	leet_map['e'] = '3';
	leet_map['E'] = '3';
	leet_map['o'] = '0';
	leet_map['O'] = '0';
	leet_map['t'] = '7';
	leet_map['T'] = '7';
	leet_map['l'] = '1';
	leet_map['L'] = '1';

	while (*ptr != '\0')
		{
		if (leet_map[(unsigned char)*ptr])
			{
			*ptr = leet_map[(unsigned char)*ptr];
			}
		ptr++;
		}

	return (str);
}
