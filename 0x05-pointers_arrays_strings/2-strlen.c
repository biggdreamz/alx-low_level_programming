#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 *
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
