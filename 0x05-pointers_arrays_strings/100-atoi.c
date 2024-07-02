#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
	{
		i++;
	}

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
